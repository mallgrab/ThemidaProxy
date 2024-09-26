#define PHNT_VERSION PHNT_THRESHOLD 

#include <phnt_windows.h>
#include <phnt.h>
#include <string.h>
#include <iostream>
#include <MinHook.h>

uint8_t DbgBreakPointBuffer[12] = {};
uint8_t DbgUiRemoteBreakinBuffer[12] = {};

void* DbgBreakPointAddr = nullptr;
void* DbgUiRemoteBreakinAddr = nullptr;

typedef NTSTATUS(__stdcall* NtSetInformationThread_t)(HANDLE ThreadHandle, THREADINFOCLASS ThreadInformationClass, PVOID ThreadInformation, ULONG ThreadInformationLength);
NtSetInformationThread_t NtSetInformationThreadOrig;
NTSTATUS __stdcall NtSetInformationThreadFunc(HANDLE ThreadHandle, THREADINFOCLASS ThreadInformationClass, PVOID ThreadInformation, ULONG ThreadInformationLength)
{
	if (ThreadInformationClass == ThreadHideFromDebugger)
	{
		HANDLE debugThreadHandle = nullptr;
		debugThreadHandle = ThreadHandle;
		printf("thread %lx threadhidefromdebugger\n", GetThreadId(ThreadHandle));

		return 0;
	}

	return NtSetInformationThreadOrig(ThreadHandle, ThreadInformationClass, ThreadInformation, ThreadInformationLength);
}

DWORD WINAPI restoreDbgFunctions( LPVOID lpParam ) 
{
	clock_t startTime = clock();

	while (true)
	{
		DWORD old_protect{};

		VirtualProtect(DbgBreakPointAddr, sizeof(uint8_t) * 12, PAGE_EXECUTE_READWRITE, &old_protect);
		memcpy(DbgBreakPointAddr, DbgBreakPointBuffer, sizeof(uint8_t) * 12);
		VirtualProtect(DbgBreakPointAddr, sizeof(uint8_t) * 12, old_protect, &old_protect);
		FlushInstructionCache(GetCurrentProcess(), DbgBreakPointAddr, sizeof(uint8_t) * 12);

		VirtualProtect(DbgUiRemoteBreakinAddr, sizeof(uint8_t) * 12, PAGE_EXECUTE_READWRITE, &old_protect);
		memcpy(DbgUiRemoteBreakinAddr, DbgUiRemoteBreakinBuffer, sizeof(uint8_t) * 12);
		VirtualProtect(DbgUiRemoteBreakinAddr, sizeof(uint8_t) * 12, old_protect, &old_protect);
		FlushInstructionCache(GetCurrentProcess(), DbgUiRemoteBreakinAddr, sizeof(uint8_t) * 12);

		clock_t endTime = clock();
		double totalTime = ((double)(endTime - startTime)) / CLOCKS_PER_SEC;
		if (totalTime > 20.0)
		{
			printf("Done writing to address locations\n");
			break;
		}
	}
	
	return 0;
}

void main()
{
	LPSTR commandLine = GetCommandLineA();
	if (strstr(commandLine, "-lan") == NULL)
	{
		printf("Didnt start in lanmode!");
		TerminateProcess(GetCurrentProcess(), 0);
	}

	MH_STATUS mhinitStatus = MH_Initialize();
	HMODULE ntdllModule = GetModuleHandle("ntdll.dll");

	if (ntdllModule != NULL)
	{
		void* NtSetInformationThreadAddr = (void*)GetProcAddress(ntdllModule, "NtSetInformationThread");
		MH_CreateHook(NtSetInformationThreadAddr, &NtSetInformationThreadFunc, (LPVOID*)&NtSetInformationThreadOrig);
		MH_EnableHook(NtSetInformationThreadAddr);

		DbgBreakPointAddr = (void*)GetProcAddress(ntdllModule, "DbgBreakPoint");
		DbgUiRemoteBreakinAddr = (void*)GetProcAddress(ntdllModule, "DbgUiRemoteBreakin");

		memcpy(DbgBreakPointBuffer, DbgBreakPointAddr, sizeof(uint8_t) * 12);
		memcpy(DbgUiRemoteBreakinBuffer, DbgUiRemoteBreakinAddr, sizeof(uint8_t) * 12);

		CreateThread(NULL, 0, restoreDbgFunctions, 0, 0, 0);
	}
}