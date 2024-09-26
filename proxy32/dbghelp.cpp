#include <windows.h>
#include "main.h"

struct dbghelp_dll { 
	HMODULE dll;
	FARPROC OrignalDbgHelpCreateUserDump;
	FARPROC OrignalDbgHelpCreateUserDumpW;
	FARPROC OrignalEnumDirTree;
	FARPROC OrignalEnumDirTreeW;
	FARPROC OrignalEnumerateLoadedModules;
	FARPROC OrignalEnumerateLoadedModules64;
	FARPROC OrignalEnumerateLoadedModulesEx;
	FARPROC OrignalEnumerateLoadedModulesExW;
	FARPROC OrignalEnumerateLoadedModulesW64;
	FARPROC OrignalExtensionApiVersion;
	FARPROC OrignalFindDebugInfoFile;
	FARPROC OrignalFindDebugInfoFileEx;
	FARPROC OrignalFindDebugInfoFileExW;
	FARPROC OrignalFindExecutableImage;
	FARPROC OrignalFindExecutableImageEx;
	FARPROC OrignalFindExecutableImageExW;
	FARPROC OrignalFindFileInPath;
	FARPROC OrignalFindFileInSearchPath;
	FARPROC OrignalGetSymLoadError;
	FARPROC OrignalGetTimestampForLoadedLibrary;
	FARPROC OrignalImageDirectoryEntryToData;
	FARPROC OrignalImageDirectoryEntryToDataEx;
	FARPROC OrignalImageNtHeader;
	FARPROC OrignalImageRvaToSection;
	FARPROC OrignalImageRvaToVa;
	FARPROC OrignalImagehlpApiVersion;
	FARPROC OrignalImagehlpApiVersionEx;
	FARPROC OrignalMakeSureDirectoryPathExists;
	FARPROC OrignalMapDebugInformation;
	FARPROC OrignalMiniDumpReadDumpStream;
	FARPROC OrignalMiniDumpWriteDump;
	FARPROC OrignalRangeMapAddPeImageSections;
	FARPROC OrignalRangeMapCreate;
	FARPROC OrignalRangeMapFree;
	FARPROC OrignalRangeMapRead;
	FARPROC OrignalRangeMapRemove;
	FARPROC OrignalRangeMapWrite;
	FARPROC OrignalRemoveInvalidModuleList;
	FARPROC OrignalReportSymbolLoadSummary;
	FARPROC OrignalSearchTreeForFile;
	FARPROC OrignalSearchTreeForFileW;
	FARPROC OrignalSetCheckUserInterruptShared;
	FARPROC OrignalSetSymLoadError;
	FARPROC OrignalStackWalk;
	FARPROC OrignalStackWalk64;
	FARPROC OrignalStackWalkEx;
	FARPROC OrignalSymAddSourceStream;
	FARPROC OrignalSymAddSourceStreamA;
	FARPROC OrignalSymAddSourceStreamW;
	FARPROC OrignalSymAddSymbol;
	FARPROC OrignalSymAddSymbolW;
	FARPROC OrignalSymAddrIncludeInlineTrace;
	FARPROC OrignalSymAllocDiaString;
	FARPROC OrignalSymCleanup;
	FARPROC OrignalSymCompareInlineTrace;
	FARPROC OrignalSymDeleteSymbol;
	FARPROC OrignalSymDeleteSymbolW;
	FARPROC OrignalSymEnumLines;
	FARPROC OrignalSymEnumLinesW;
	FARPROC OrignalSymEnumProcesses;
	FARPROC OrignalSymEnumSourceFileTokens;
	FARPROC OrignalSymEnumSourceFiles;
	FARPROC OrignalSymEnumSourceFilesW;
	FARPROC OrignalSymEnumSourceLines;
	FARPROC OrignalSymEnumSourceLinesW;
	FARPROC OrignalSymEnumSym;
	FARPROC OrignalSymEnumSymbols;
	FARPROC OrignalSymEnumSymbolsEx;
	FARPROC OrignalSymEnumSymbolsExW;
	FARPROC OrignalSymEnumSymbolsForAddr;
	FARPROC OrignalSymEnumSymbolsForAddrW;
	FARPROC OrignalSymEnumSymbolsW;
	FARPROC OrignalSymEnumTypes;
	FARPROC OrignalSymEnumTypesByName;
	FARPROC OrignalSymEnumTypesByNameW;
	FARPROC OrignalSymEnumTypesW;
	FARPROC OrignalSymEnumerateModules;
	FARPROC OrignalSymEnumerateModules64;
	FARPROC OrignalSymEnumerateModulesW64;
	FARPROC OrignalSymEnumerateSymbols;
	FARPROC OrignalSymEnumerateSymbols64;
	FARPROC OrignalSymEnumerateSymbolsW;
	FARPROC OrignalSymEnumerateSymbolsW64;
	FARPROC OrignalSymFindDebugInfoFile;
	FARPROC OrignalSymFindDebugInfoFileW;
	FARPROC OrignalSymFindExecutableImage;
	FARPROC OrignalSymFindExecutableImageW;
	FARPROC OrignalSymFindFileInPath;
	FARPROC OrignalSymFindFileInPathW;
	FARPROC OrignalSymFreeDiaString;
	FARPROC OrignalSymFromAddr;
	FARPROC OrignalSymFromAddrW;
	FARPROC OrignalSymFromIndex;
	FARPROC OrignalSymFromIndexW;
	FARPROC OrignalSymFromInlineContext;
	FARPROC OrignalSymFromInlineContextW;
	FARPROC OrignalSymFromName;
	FARPROC OrignalSymFromNameW;
	FARPROC OrignalSymFromToken;
	FARPROC OrignalSymFromTokenW;
	FARPROC OrignalSymFunctionTableAccess;
	FARPROC OrignalSymFunctionTableAccess64;
	FARPROC OrignalSymFunctionTableAccess64AccessRoutines;
	FARPROC OrignalSymGetDiaSession;
	FARPROC OrignalSymGetExtendedOption;
	FARPROC OrignalSymGetFileLineOffsets64;
	FARPROC OrignalSymGetHomeDirectory;
	FARPROC OrignalSymGetHomeDirectoryW;
	FARPROC OrignalSymGetLineFromAddr;
	FARPROC OrignalSymGetLineFromAddr64;
	FARPROC OrignalSymGetLineFromAddrW64;
	FARPROC OrignalSymGetLineFromInlineContext;
	FARPROC OrignalSymGetLineFromInlineContextW;
	FARPROC OrignalSymGetLineFromName;
	FARPROC OrignalSymGetLineFromName64;
	FARPROC OrignalSymGetLineFromNameW64;
	FARPROC OrignalSymGetLineNext;
	FARPROC OrignalSymGetLineNext64;
	FARPROC OrignalSymGetLineNextW64;
	FARPROC OrignalSymGetLinePrev;
	FARPROC OrignalSymGetLinePrev64;
	FARPROC OrignalSymGetLinePrevW64;
	FARPROC OrignalSymGetModuleBase;
	FARPROC OrignalSymGetModuleBase64;
	FARPROC OrignalSymGetModuleInfo;
	FARPROC OrignalSymGetModuleInfo64;
	FARPROC OrignalSymGetModuleInfoW;
	FARPROC OrignalSymGetModuleInfoW64;
	FARPROC OrignalSymGetOmapBlockBase;
	FARPROC OrignalSymGetOmaps;
	FARPROC OrignalSymGetOptions;
	FARPROC OrignalSymGetScope;
	FARPROC OrignalSymGetScopeW;
	FARPROC OrignalSymGetSearchPath;
	FARPROC OrignalSymGetSearchPathW;
	FARPROC OrignalSymGetSourceFile;
	FARPROC OrignalSymGetSourceFileChecksum;
	FARPROC OrignalSymGetSourceFileChecksumW;
	FARPROC OrignalSymGetSourceFileFromToken;
	FARPROC OrignalSymGetSourceFileFromTokenW;
	FARPROC OrignalSymGetSourceFileToken;
	FARPROC OrignalSymGetSourceFileTokenW;
	FARPROC OrignalSymGetSourceFileW;
	FARPROC OrignalSymGetSourceVarFromToken;
	FARPROC OrignalSymGetSourceVarFromTokenW;
	FARPROC OrignalSymGetSymFromAddr;
	FARPROC OrignalSymGetSymFromAddr64;
	FARPROC OrignalSymGetSymFromName;
	FARPROC OrignalSymGetSymFromName64;
	FARPROC OrignalSymGetSymNext;
	FARPROC OrignalSymGetSymNext64;
	FARPROC OrignalSymGetSymPrev;
	FARPROC OrignalSymGetSymPrev64;
	FARPROC OrignalSymGetSymbolFile;
	FARPROC OrignalSymGetSymbolFileW;
	FARPROC OrignalSymGetTypeFromName;
	FARPROC OrignalSymGetTypeFromNameW;
	FARPROC OrignalSymGetTypeInfo;
	FARPROC OrignalSymGetTypeInfoEx;
	FARPROC OrignalSymGetUnwindInfo;
	FARPROC OrignalSymInitialize;
	FARPROC OrignalSymInitializeW;
	FARPROC OrignalSymLoadModule;
	FARPROC OrignalSymLoadModule64;
	FARPROC OrignalSymLoadModuleEx;
	FARPROC OrignalSymLoadModuleExW;
	FARPROC OrignalSymMatchFileName;
	FARPROC OrignalSymMatchFileNameW;
	FARPROC OrignalSymMatchString;
	FARPROC OrignalSymMatchStringA;
	FARPROC OrignalSymMatchStringW;
	FARPROC OrignalSymNext;
	FARPROC OrignalSymNextW;
	FARPROC OrignalSymPrev;
	FARPROC OrignalSymPrevW;
	FARPROC OrignalSymQueryInlineTrace;
	FARPROC OrignalSymRefreshModuleList;
	FARPROC OrignalSymRegisterCallback;
	FARPROC OrignalSymRegisterCallback64;
	FARPROC OrignalSymRegisterCallbackW64;
	FARPROC OrignalSymRegisterFunctionEntryCallback;
	FARPROC OrignalSymRegisterFunctionEntryCallback64;
	FARPROC OrignalSymSearch;
	FARPROC OrignalSymSearchW;
	FARPROC OrignalSymSetContext;
	FARPROC OrignalSymSetDiaSession;
	FARPROC OrignalSymSetExtendedOption;
	FARPROC OrignalSymSetHomeDirectory;
	FARPROC OrignalSymSetHomeDirectoryW;
	FARPROC OrignalSymSetOptions;
	FARPROC OrignalSymSetParentWindow;
	FARPROC OrignalSymSetScopeFromAddr;
	FARPROC OrignalSymSetScopeFromIndex;
	FARPROC OrignalSymSetScopeFromInlineContext;
	FARPROC OrignalSymSetSearchPath;
	FARPROC OrignalSymSetSearchPathW;
	FARPROC OrignalSymSrvDeltaName;
	FARPROC OrignalSymSrvDeltaNameW;
	FARPROC OrignalSymSrvGetFileIndexInfo;
	FARPROC OrignalSymSrvGetFileIndexInfoW;
	FARPROC OrignalSymSrvGetFileIndexString;
	FARPROC OrignalSymSrvGetFileIndexStringW;
	FARPROC OrignalSymSrvGetFileIndexes;
	FARPROC OrignalSymSrvGetFileIndexesW;
	FARPROC OrignalSymSrvGetSupplement;
	FARPROC OrignalSymSrvGetSupplementW;
	FARPROC OrignalSymSrvIsStore;
	FARPROC OrignalSymSrvIsStoreW;
	FARPROC OrignalSymSrvStoreFile;
	FARPROC OrignalSymSrvStoreFileW;
	FARPROC OrignalSymSrvStoreSupplement;
	FARPROC OrignalSymSrvStoreSupplementW;
	FARPROC OrignalSymUnDName;
	FARPROC OrignalSymUnDName64;
	FARPROC OrignalSymUnloadModule;
	FARPROC OrignalSymUnloadModule64;
	FARPROC OrignalUnDecorateSymbolName;
	FARPROC OrignalUnDecorateSymbolNameW;
	FARPROC OrignalUnmapDebugInformation;
	FARPROC OrignalWinDbgExtensionDllInit;
	FARPROC Orignal_EFN_DumpImage;
	FARPROC Orignalblock;
	FARPROC Orignalchksym;
	FARPROC Orignaldbghelp;
	FARPROC Orignaldh;
	FARPROC Orignalfptr;
	FARPROC Orignalhomedir;
	FARPROC Orignalinlinedbg;
	FARPROC Orignalitoldyouso;
	FARPROC Orignallmi;
	FARPROC Orignallminfo;
	FARPROC Orignalomap;
	FARPROC Orignaloptdbgdump;
	FARPROC Orignaloptdbgdumpaddr;
	FARPROC Orignalsrcfiles;
	FARPROC Orignalstack_force_ebp;
	FARPROC Orignalstackdbg;
	FARPROC Orignalsym;
	FARPROC Orignalsymsrv;
	FARPROC Orignalvc7fpo;
} dbghelp;

__declspec(naked) void FakeDbgHelpCreateUserDump() { _asm { jmp[dbghelp.OrignalDbgHelpCreateUserDump] } }
__declspec(naked) void FakeDbgHelpCreateUserDumpW() { _asm { jmp[dbghelp.OrignalDbgHelpCreateUserDumpW] } }
__declspec(naked) void FakeEnumDirTree() { _asm { jmp[dbghelp.OrignalEnumDirTree] } }
__declspec(naked) void FakeEnumDirTreeW() { _asm { jmp[dbghelp.OrignalEnumDirTreeW] } }
__declspec(naked) void FakeEnumerateLoadedModules() { _asm { jmp[dbghelp.OrignalEnumerateLoadedModules] } }
__declspec(naked) void FakeEnumerateLoadedModules64() { _asm { jmp[dbghelp.OrignalEnumerateLoadedModules64] } }
__declspec(naked) void FakeEnumerateLoadedModulesEx() { _asm { jmp[dbghelp.OrignalEnumerateLoadedModulesEx] } }
__declspec(naked) void FakeEnumerateLoadedModulesExW() { _asm { jmp[dbghelp.OrignalEnumerateLoadedModulesExW] } }
__declspec(naked) void FakeEnumerateLoadedModulesW64() { _asm { jmp[dbghelp.OrignalEnumerateLoadedModulesW64] } }
__declspec(naked) void FakeExtensionApiVersion() { _asm { jmp[dbghelp.OrignalExtensionApiVersion] } }
__declspec(naked) void FakeFindDebugInfoFile() { _asm { jmp[dbghelp.OrignalFindDebugInfoFile] } }
__declspec(naked) void FakeFindDebugInfoFileEx() { _asm { jmp[dbghelp.OrignalFindDebugInfoFileEx] } }
__declspec(naked) void FakeFindDebugInfoFileExW() { _asm { jmp[dbghelp.OrignalFindDebugInfoFileExW] } }
__declspec(naked) void FakeFindExecutableImage() { _asm { jmp[dbghelp.OrignalFindExecutableImage] } }
__declspec(naked) void FakeFindExecutableImageEx() { _asm { jmp[dbghelp.OrignalFindExecutableImageEx] } }
__declspec(naked) void FakeFindExecutableImageExW() { _asm { jmp[dbghelp.OrignalFindExecutableImageExW] } }
__declspec(naked) void FakeFindFileInPath() { _asm { jmp[dbghelp.OrignalFindFileInPath] } }
__declspec(naked) void FakeFindFileInSearchPath() { _asm { jmp[dbghelp.OrignalFindFileInSearchPath] } }
__declspec(naked) void FakeGetSymLoadError() { _asm { jmp[dbghelp.OrignalGetSymLoadError] } }
__declspec(naked) void FakeGetTimestampForLoadedLibrary() { _asm { jmp[dbghelp.OrignalGetTimestampForLoadedLibrary] } }
__declspec(naked) void FakeImageDirectoryEntryToData() { _asm { jmp[dbghelp.OrignalImageDirectoryEntryToData] } }
__declspec(naked) void FakeImageDirectoryEntryToDataEx() { _asm { jmp[dbghelp.OrignalImageDirectoryEntryToDataEx] } }
__declspec(naked) void FakeImageNtHeader() { _asm { jmp[dbghelp.OrignalImageNtHeader] } }
__declspec(naked) void FakeImageRvaToSection() { _asm { jmp[dbghelp.OrignalImageRvaToSection] } }
__declspec(naked) void FakeImageRvaToVa() { _asm { jmp[dbghelp.OrignalImageRvaToVa] } }
__declspec(naked) void FakeImagehlpApiVersion() { _asm { jmp[dbghelp.OrignalImagehlpApiVersion] } }
__declspec(naked) void FakeImagehlpApiVersionEx() { _asm { jmp[dbghelp.OrignalImagehlpApiVersionEx] } }
__declspec(naked) void FakeMakeSureDirectoryPathExists() { _asm { jmp[dbghelp.OrignalMakeSureDirectoryPathExists] } }
__declspec(naked) void FakeMapDebugInformation() { _asm { jmp[dbghelp.OrignalMapDebugInformation] } }
__declspec(naked) void FakeMiniDumpReadDumpStream() { _asm { jmp[dbghelp.OrignalMiniDumpReadDumpStream] } }
__declspec(naked) void FakeMiniDumpWriteDump() { _asm { jmp[dbghelp.OrignalMiniDumpWriteDump] } }
__declspec(naked) void FakeRangeMapAddPeImageSections() { _asm { jmp[dbghelp.OrignalRangeMapAddPeImageSections] } }
__declspec(naked) void FakeRangeMapCreate() { _asm { jmp[dbghelp.OrignalRangeMapCreate] } }
__declspec(naked) void FakeRangeMapFree() { _asm { jmp[dbghelp.OrignalRangeMapFree] } }
__declspec(naked) void FakeRangeMapRead() { _asm { jmp[dbghelp.OrignalRangeMapRead] } }
__declspec(naked) void FakeRangeMapRemove() { _asm { jmp[dbghelp.OrignalRangeMapRemove] } }
__declspec(naked) void FakeRangeMapWrite() { _asm { jmp[dbghelp.OrignalRangeMapWrite] } }
__declspec(naked) void FakeRemoveInvalidModuleList() { _asm { jmp[dbghelp.OrignalRemoveInvalidModuleList] } }
__declspec(naked) void FakeReportSymbolLoadSummary() { _asm { jmp[dbghelp.OrignalReportSymbolLoadSummary] } }
__declspec(naked) void FakeSearchTreeForFile() { _asm { jmp[dbghelp.OrignalSearchTreeForFile] } }
__declspec(naked) void FakeSearchTreeForFileW() { _asm { jmp[dbghelp.OrignalSearchTreeForFileW] } }
__declspec(naked) void FakeSetCheckUserInterruptShared() { _asm { jmp[dbghelp.OrignalSetCheckUserInterruptShared] } }
__declspec(naked) void FakeSetSymLoadError() { _asm { jmp[dbghelp.OrignalSetSymLoadError] } }
__declspec(naked) void FakeStackWalk() { _asm { jmp[dbghelp.OrignalStackWalk] } }
__declspec(naked) void FakeStackWalk64() { _asm { jmp[dbghelp.OrignalStackWalk64] } }
__declspec(naked) void FakeStackWalkEx() { _asm { jmp[dbghelp.OrignalStackWalkEx] } }
__declspec(naked) void FakeSymAddSourceStream() { _asm { jmp[dbghelp.OrignalSymAddSourceStream] } }
__declspec(naked) void FakeSymAddSourceStreamA() { _asm { jmp[dbghelp.OrignalSymAddSourceStreamA] } }
__declspec(naked) void FakeSymAddSourceStreamW() { _asm { jmp[dbghelp.OrignalSymAddSourceStreamW] } }
__declspec(naked) void FakeSymAddSymbol() { _asm { jmp[dbghelp.OrignalSymAddSymbol] } }
__declspec(naked) void FakeSymAddSymbolW() { _asm { jmp[dbghelp.OrignalSymAddSymbolW] } }
__declspec(naked) void FakeSymAddrIncludeInlineTrace() { _asm { jmp[dbghelp.OrignalSymAddrIncludeInlineTrace] } }
__declspec(naked) void FakeSymAllocDiaString() { _asm { jmp[dbghelp.OrignalSymAllocDiaString] } }
__declspec(naked) void FakeSymCleanup() { _asm { jmp[dbghelp.OrignalSymCleanup] } }
__declspec(naked) void FakeSymCompareInlineTrace() { _asm { jmp[dbghelp.OrignalSymCompareInlineTrace] } }
__declspec(naked) void FakeSymDeleteSymbol() { _asm { jmp[dbghelp.OrignalSymDeleteSymbol] } }
__declspec(naked) void FakeSymDeleteSymbolW() { _asm { jmp[dbghelp.OrignalSymDeleteSymbolW] } }
__declspec(naked) void FakeSymEnumLines() { _asm { jmp[dbghelp.OrignalSymEnumLines] } }
__declspec(naked) void FakeSymEnumLinesW() { _asm { jmp[dbghelp.OrignalSymEnumLinesW] } }
__declspec(naked) void FakeSymEnumProcesses() { _asm { jmp[dbghelp.OrignalSymEnumProcesses] } }
__declspec(naked) void FakeSymEnumSourceFileTokens() { _asm { jmp[dbghelp.OrignalSymEnumSourceFileTokens] } }
__declspec(naked) void FakeSymEnumSourceFiles() { _asm { jmp[dbghelp.OrignalSymEnumSourceFiles] } }
__declspec(naked) void FakeSymEnumSourceFilesW() { _asm { jmp[dbghelp.OrignalSymEnumSourceFilesW] } }
__declspec(naked) void FakeSymEnumSourceLines() { _asm { jmp[dbghelp.OrignalSymEnumSourceLines] } }
__declspec(naked) void FakeSymEnumSourceLinesW() { _asm { jmp[dbghelp.OrignalSymEnumSourceLinesW] } }
__declspec(naked) void FakeSymEnumSym() { _asm { jmp[dbghelp.OrignalSymEnumSym] } }
__declspec(naked) void FakeSymEnumSymbols() { _asm { jmp[dbghelp.OrignalSymEnumSymbols] } }
__declspec(naked) void FakeSymEnumSymbolsEx() { _asm { jmp[dbghelp.OrignalSymEnumSymbolsEx] } }
__declspec(naked) void FakeSymEnumSymbolsExW() { _asm { jmp[dbghelp.OrignalSymEnumSymbolsExW] } }
__declspec(naked) void FakeSymEnumSymbolsForAddr() { _asm { jmp[dbghelp.OrignalSymEnumSymbolsForAddr] } }
__declspec(naked) void FakeSymEnumSymbolsForAddrW() { _asm { jmp[dbghelp.OrignalSymEnumSymbolsForAddrW] } }
__declspec(naked) void FakeSymEnumSymbolsW() { _asm { jmp[dbghelp.OrignalSymEnumSymbolsW] } }
__declspec(naked) void FakeSymEnumTypes() { _asm { jmp[dbghelp.OrignalSymEnumTypes] } }
__declspec(naked) void FakeSymEnumTypesByName() { _asm { jmp[dbghelp.OrignalSymEnumTypesByName] } }
__declspec(naked) void FakeSymEnumTypesByNameW() { _asm { jmp[dbghelp.OrignalSymEnumTypesByNameW] } }
__declspec(naked) void FakeSymEnumTypesW() { _asm { jmp[dbghelp.OrignalSymEnumTypesW] } }
__declspec(naked) void FakeSymEnumerateModules() { _asm { jmp[dbghelp.OrignalSymEnumerateModules] } }
__declspec(naked) void FakeSymEnumerateModules64() { _asm { jmp[dbghelp.OrignalSymEnumerateModules64] } }
__declspec(naked) void FakeSymEnumerateModulesW64() { _asm { jmp[dbghelp.OrignalSymEnumerateModulesW64] } }
__declspec(naked) void FakeSymEnumerateSymbols() { _asm { jmp[dbghelp.OrignalSymEnumerateSymbols] } }
__declspec(naked) void FakeSymEnumerateSymbols64() { _asm { jmp[dbghelp.OrignalSymEnumerateSymbols64] } }
__declspec(naked) void FakeSymEnumerateSymbolsW() { _asm { jmp[dbghelp.OrignalSymEnumerateSymbolsW] } }
__declspec(naked) void FakeSymEnumerateSymbolsW64() { _asm { jmp[dbghelp.OrignalSymEnumerateSymbolsW64] } }
__declspec(naked) void FakeSymFindDebugInfoFile() { _asm { jmp[dbghelp.OrignalSymFindDebugInfoFile] } }
__declspec(naked) void FakeSymFindDebugInfoFileW() { _asm { jmp[dbghelp.OrignalSymFindDebugInfoFileW] } }
__declspec(naked) void FakeSymFindExecutableImage() { _asm { jmp[dbghelp.OrignalSymFindExecutableImage] } }
__declspec(naked) void FakeSymFindExecutableImageW() { _asm { jmp[dbghelp.OrignalSymFindExecutableImageW] } }
__declspec(naked) void FakeSymFindFileInPath() { _asm { jmp[dbghelp.OrignalSymFindFileInPath] } }
__declspec(naked) void FakeSymFindFileInPathW() { _asm { jmp[dbghelp.OrignalSymFindFileInPathW] } }
__declspec(naked) void FakeSymFreeDiaString() { _asm { jmp[dbghelp.OrignalSymFreeDiaString] } }
__declspec(naked) void FakeSymFromAddr() { _asm { jmp[dbghelp.OrignalSymFromAddr] } }
__declspec(naked) void FakeSymFromAddrW() { _asm { jmp[dbghelp.OrignalSymFromAddrW] } }
__declspec(naked) void FakeSymFromIndex() { _asm { jmp[dbghelp.OrignalSymFromIndex] } }
__declspec(naked) void FakeSymFromIndexW() { _asm { jmp[dbghelp.OrignalSymFromIndexW] } }
__declspec(naked) void FakeSymFromInlineContext() { _asm { jmp[dbghelp.OrignalSymFromInlineContext] } }
__declspec(naked) void FakeSymFromInlineContextW() { _asm { jmp[dbghelp.OrignalSymFromInlineContextW] } }
__declspec(naked) void FakeSymFromName() { _asm { jmp[dbghelp.OrignalSymFromName] } }
__declspec(naked) void FakeSymFromNameW() { _asm { jmp[dbghelp.OrignalSymFromNameW] } }
__declspec(naked) void FakeSymFromToken() { _asm { jmp[dbghelp.OrignalSymFromToken] } }
__declspec(naked) void FakeSymFromTokenW() { _asm { jmp[dbghelp.OrignalSymFromTokenW] } }
__declspec(naked) void FakeSymFunctionTableAccess() { _asm { jmp[dbghelp.OrignalSymFunctionTableAccess] } }
__declspec(naked) void FakeSymFunctionTableAccess64() { _asm { jmp[dbghelp.OrignalSymFunctionTableAccess64] } }
__declspec(naked) void FakeSymFunctionTableAccess64AccessRoutines() { _asm { jmp[dbghelp.OrignalSymFunctionTableAccess64AccessRoutines] } }
__declspec(naked) void FakeSymGetDiaSession() { _asm { jmp[dbghelp.OrignalSymGetDiaSession] } }
__declspec(naked) void FakeSymGetExtendedOption() { _asm { jmp[dbghelp.OrignalSymGetExtendedOption] } }
__declspec(naked) void FakeSymGetFileLineOffsets64() { _asm { jmp[dbghelp.OrignalSymGetFileLineOffsets64] } }
__declspec(naked) void FakeSymGetHomeDirectory() { _asm { jmp[dbghelp.OrignalSymGetHomeDirectory] } }
__declspec(naked) void FakeSymGetHomeDirectoryW() { _asm { jmp[dbghelp.OrignalSymGetHomeDirectoryW] } }
__declspec(naked) void FakeSymGetLineFromAddr() { _asm { jmp[dbghelp.OrignalSymGetLineFromAddr] } }
__declspec(naked) void FakeSymGetLineFromAddr64() { _asm { jmp[dbghelp.OrignalSymGetLineFromAddr64] } }
__declspec(naked) void FakeSymGetLineFromAddrW64() { _asm { jmp[dbghelp.OrignalSymGetLineFromAddrW64] } }
__declspec(naked) void FakeSymGetLineFromInlineContext() { _asm { jmp[dbghelp.OrignalSymGetLineFromInlineContext] } }
__declspec(naked) void FakeSymGetLineFromInlineContextW() { _asm { jmp[dbghelp.OrignalSymGetLineFromInlineContextW] } }
__declspec(naked) void FakeSymGetLineFromName() { _asm { jmp[dbghelp.OrignalSymGetLineFromName] } }
__declspec(naked) void FakeSymGetLineFromName64() { _asm { jmp[dbghelp.OrignalSymGetLineFromName64] } }
__declspec(naked) void FakeSymGetLineFromNameW64() { _asm { jmp[dbghelp.OrignalSymGetLineFromNameW64] } }
__declspec(naked) void FakeSymGetLineNext() { _asm { jmp[dbghelp.OrignalSymGetLineNext] } }
__declspec(naked) void FakeSymGetLineNext64() { _asm { jmp[dbghelp.OrignalSymGetLineNext64] } }
__declspec(naked) void FakeSymGetLineNextW64() { _asm { jmp[dbghelp.OrignalSymGetLineNextW64] } }
__declspec(naked) void FakeSymGetLinePrev() { _asm { jmp[dbghelp.OrignalSymGetLinePrev] } }
__declspec(naked) void FakeSymGetLinePrev64() { _asm { jmp[dbghelp.OrignalSymGetLinePrev64] } }
__declspec(naked) void FakeSymGetLinePrevW64() { _asm { jmp[dbghelp.OrignalSymGetLinePrevW64] } }
__declspec(naked) void FakeSymGetModuleBase() { _asm { jmp[dbghelp.OrignalSymGetModuleBase] } }
__declspec(naked) void FakeSymGetModuleBase64() { _asm { jmp[dbghelp.OrignalSymGetModuleBase64] } }
__declspec(naked) void FakeSymGetModuleInfo() { _asm { jmp[dbghelp.OrignalSymGetModuleInfo] } }
__declspec(naked) void FakeSymGetModuleInfo64() { _asm { jmp[dbghelp.OrignalSymGetModuleInfo64] } }
__declspec(naked) void FakeSymGetModuleInfoW() { _asm { jmp[dbghelp.OrignalSymGetModuleInfoW] } }
__declspec(naked) void FakeSymGetModuleInfoW64() { _asm { jmp[dbghelp.OrignalSymGetModuleInfoW64] } }
__declspec(naked) void FakeSymGetOmapBlockBase() { _asm { jmp[dbghelp.OrignalSymGetOmapBlockBase] } }
__declspec(naked) void FakeSymGetOmaps() { _asm { jmp[dbghelp.OrignalSymGetOmaps] } }
__declspec(naked) void FakeSymGetOptions() { _asm { jmp[dbghelp.OrignalSymGetOptions] } }
__declspec(naked) void FakeSymGetScope() { _asm { jmp[dbghelp.OrignalSymGetScope] } }
__declspec(naked) void FakeSymGetScopeW() { _asm { jmp[dbghelp.OrignalSymGetScopeW] } }
__declspec(naked) void FakeSymGetSearchPath() { _asm { jmp[dbghelp.OrignalSymGetSearchPath] } }
__declspec(naked) void FakeSymGetSearchPathW() { _asm { jmp[dbghelp.OrignalSymGetSearchPathW] } }
__declspec(naked) void FakeSymGetSourceFile() { _asm { jmp[dbghelp.OrignalSymGetSourceFile] } }
__declspec(naked) void FakeSymGetSourceFileChecksum() { _asm { jmp[dbghelp.OrignalSymGetSourceFileChecksum] } }
__declspec(naked) void FakeSymGetSourceFileChecksumW() { _asm { jmp[dbghelp.OrignalSymGetSourceFileChecksumW] } }
__declspec(naked) void FakeSymGetSourceFileFromToken() { _asm { jmp[dbghelp.OrignalSymGetSourceFileFromToken] } }
__declspec(naked) void FakeSymGetSourceFileFromTokenW() { _asm { jmp[dbghelp.OrignalSymGetSourceFileFromTokenW] } }
__declspec(naked) void FakeSymGetSourceFileToken() { _asm { jmp[dbghelp.OrignalSymGetSourceFileToken] } }
__declspec(naked) void FakeSymGetSourceFileTokenW() { _asm { jmp[dbghelp.OrignalSymGetSourceFileTokenW] } }
__declspec(naked) void FakeSymGetSourceFileW() { _asm { jmp[dbghelp.OrignalSymGetSourceFileW] } }
__declspec(naked) void FakeSymGetSourceVarFromToken() { _asm { jmp[dbghelp.OrignalSymGetSourceVarFromToken] } }
__declspec(naked) void FakeSymGetSourceVarFromTokenW() { _asm { jmp[dbghelp.OrignalSymGetSourceVarFromTokenW] } }
__declspec(naked) void FakeSymGetSymFromAddr() { _asm { jmp[dbghelp.OrignalSymGetSymFromAddr] } }
__declspec(naked) void FakeSymGetSymFromAddr64() { _asm { jmp[dbghelp.OrignalSymGetSymFromAddr64] } }
__declspec(naked) void FakeSymGetSymFromName() { _asm { jmp[dbghelp.OrignalSymGetSymFromName] } }
__declspec(naked) void FakeSymGetSymFromName64() { _asm { jmp[dbghelp.OrignalSymGetSymFromName64] } }
__declspec(naked) void FakeSymGetSymNext() { _asm { jmp[dbghelp.OrignalSymGetSymNext] } }
__declspec(naked) void FakeSymGetSymNext64() { _asm { jmp[dbghelp.OrignalSymGetSymNext64] } }
__declspec(naked) void FakeSymGetSymPrev() { _asm { jmp[dbghelp.OrignalSymGetSymPrev] } }
__declspec(naked) void FakeSymGetSymPrev64() { _asm { jmp[dbghelp.OrignalSymGetSymPrev64] } }
__declspec(naked) void FakeSymGetSymbolFile() { _asm { jmp[dbghelp.OrignalSymGetSymbolFile] } }
__declspec(naked) void FakeSymGetSymbolFileW() { _asm { jmp[dbghelp.OrignalSymGetSymbolFileW] } }
__declspec(naked) void FakeSymGetTypeFromName() { _asm { jmp[dbghelp.OrignalSymGetTypeFromName] } }
__declspec(naked) void FakeSymGetTypeFromNameW() { _asm { jmp[dbghelp.OrignalSymGetTypeFromNameW] } }
__declspec(naked) void FakeSymGetTypeInfo() { _asm { jmp[dbghelp.OrignalSymGetTypeInfo] } }
__declspec(naked) void FakeSymGetTypeInfoEx() { _asm { jmp[dbghelp.OrignalSymGetTypeInfoEx] } }
__declspec(naked) void FakeSymGetUnwindInfo() { _asm { jmp[dbghelp.OrignalSymGetUnwindInfo] } }
__declspec(naked) void FakeSymInitialize() { _asm { jmp[dbghelp.OrignalSymInitialize] } }
__declspec(naked) void FakeSymInitializeW() { _asm { jmp[dbghelp.OrignalSymInitializeW] } }
__declspec(naked) void FakeSymLoadModule() { _asm { jmp[dbghelp.OrignalSymLoadModule] } }
__declspec(naked) void FakeSymLoadModule64() { _asm { jmp[dbghelp.OrignalSymLoadModule64] } }
__declspec(naked) void FakeSymLoadModuleEx() { _asm { jmp[dbghelp.OrignalSymLoadModuleEx] } }
__declspec(naked) void FakeSymLoadModuleExW() { _asm { jmp[dbghelp.OrignalSymLoadModuleExW] } }
__declspec(naked) void FakeSymMatchFileName() { _asm { jmp[dbghelp.OrignalSymMatchFileName] } }
__declspec(naked) void FakeSymMatchFileNameW() { _asm { jmp[dbghelp.OrignalSymMatchFileNameW] } }
__declspec(naked) void FakeSymMatchString() { _asm { jmp[dbghelp.OrignalSymMatchString] } }
__declspec(naked) void FakeSymMatchStringA() { _asm { jmp[dbghelp.OrignalSymMatchStringA] } }
__declspec(naked) void FakeSymMatchStringW() { _asm { jmp[dbghelp.OrignalSymMatchStringW] } }
__declspec(naked) void FakeSymNext() { _asm { jmp[dbghelp.OrignalSymNext] } }
__declspec(naked) void FakeSymNextW() { _asm { jmp[dbghelp.OrignalSymNextW] } }
__declspec(naked) void FakeSymPrev() { _asm { jmp[dbghelp.OrignalSymPrev] } }
__declspec(naked) void FakeSymPrevW() { _asm { jmp[dbghelp.OrignalSymPrevW] } }
__declspec(naked) void FakeSymQueryInlineTrace() { _asm { jmp[dbghelp.OrignalSymQueryInlineTrace] } }
__declspec(naked) void FakeSymRefreshModuleList() { _asm { jmp[dbghelp.OrignalSymRefreshModuleList] } }
__declspec(naked) void FakeSymRegisterCallback() { _asm { jmp[dbghelp.OrignalSymRegisterCallback] } }
__declspec(naked) void FakeSymRegisterCallback64() { _asm { jmp[dbghelp.OrignalSymRegisterCallback64] } }
__declspec(naked) void FakeSymRegisterCallbackW64() { _asm { jmp[dbghelp.OrignalSymRegisterCallbackW64] } }
__declspec(naked) void FakeSymRegisterFunctionEntryCallback() { _asm { jmp[dbghelp.OrignalSymRegisterFunctionEntryCallback] } }
__declspec(naked) void FakeSymRegisterFunctionEntryCallback64() { _asm { jmp[dbghelp.OrignalSymRegisterFunctionEntryCallback64] } }
__declspec(naked) void FakeSymSearch() { _asm { jmp[dbghelp.OrignalSymSearch] } }
__declspec(naked) void FakeSymSearchW() { _asm { jmp[dbghelp.OrignalSymSearchW] } }
__declspec(naked) void FakeSymSetContext() { _asm { jmp[dbghelp.OrignalSymSetContext] } }
__declspec(naked) void FakeSymSetDiaSession() { _asm { jmp[dbghelp.OrignalSymSetDiaSession] } }
__declspec(naked) void FakeSymSetExtendedOption() { _asm { jmp[dbghelp.OrignalSymSetExtendedOption] } }
__declspec(naked) void FakeSymSetHomeDirectory() { _asm { jmp[dbghelp.OrignalSymSetHomeDirectory] } }
__declspec(naked) void FakeSymSetHomeDirectoryW() { _asm { jmp[dbghelp.OrignalSymSetHomeDirectoryW] } }
__declspec(naked) void FakeSymSetOptions() { _asm { jmp[dbghelp.OrignalSymSetOptions] } }
__declspec(naked) void FakeSymSetParentWindow() { _asm { jmp[dbghelp.OrignalSymSetParentWindow] } }
__declspec(naked) void FakeSymSetScopeFromAddr() { _asm { jmp[dbghelp.OrignalSymSetScopeFromAddr] } }
__declspec(naked) void FakeSymSetScopeFromIndex() { _asm { jmp[dbghelp.OrignalSymSetScopeFromIndex] } }
__declspec(naked) void FakeSymSetScopeFromInlineContext() { _asm { jmp[dbghelp.OrignalSymSetScopeFromInlineContext] } }
__declspec(naked) void FakeSymSetSearchPath() { _asm { jmp[dbghelp.OrignalSymSetSearchPath] } }
__declspec(naked) void FakeSymSetSearchPathW() { _asm { jmp[dbghelp.OrignalSymSetSearchPathW] } }
__declspec(naked) void FakeSymSrvDeltaName() { _asm { jmp[dbghelp.OrignalSymSrvDeltaName] } }
__declspec(naked) void FakeSymSrvDeltaNameW() { _asm { jmp[dbghelp.OrignalSymSrvDeltaNameW] } }
__declspec(naked) void FakeSymSrvGetFileIndexInfo() { _asm { jmp[dbghelp.OrignalSymSrvGetFileIndexInfo] } }
__declspec(naked) void FakeSymSrvGetFileIndexInfoW() { _asm { jmp[dbghelp.OrignalSymSrvGetFileIndexInfoW] } }
__declspec(naked) void FakeSymSrvGetFileIndexString() { _asm { jmp[dbghelp.OrignalSymSrvGetFileIndexString] } }
__declspec(naked) void FakeSymSrvGetFileIndexStringW() { _asm { jmp[dbghelp.OrignalSymSrvGetFileIndexStringW] } }
__declspec(naked) void FakeSymSrvGetFileIndexes() { _asm { jmp[dbghelp.OrignalSymSrvGetFileIndexes] } }
__declspec(naked) void FakeSymSrvGetFileIndexesW() { _asm { jmp[dbghelp.OrignalSymSrvGetFileIndexesW] } }
__declspec(naked) void FakeSymSrvGetSupplement() { _asm { jmp[dbghelp.OrignalSymSrvGetSupplement] } }
__declspec(naked) void FakeSymSrvGetSupplementW() { _asm { jmp[dbghelp.OrignalSymSrvGetSupplementW] } }
__declspec(naked) void FakeSymSrvIsStore() { _asm { jmp[dbghelp.OrignalSymSrvIsStore] } }
__declspec(naked) void FakeSymSrvIsStoreW() { _asm { jmp[dbghelp.OrignalSymSrvIsStoreW] } }
__declspec(naked) void FakeSymSrvStoreFile() { _asm { jmp[dbghelp.OrignalSymSrvStoreFile] } }
__declspec(naked) void FakeSymSrvStoreFileW() { _asm { jmp[dbghelp.OrignalSymSrvStoreFileW] } }
__declspec(naked) void FakeSymSrvStoreSupplement() { _asm { jmp[dbghelp.OrignalSymSrvStoreSupplement] } }
__declspec(naked) void FakeSymSrvStoreSupplementW() { _asm { jmp[dbghelp.OrignalSymSrvStoreSupplementW] } }
__declspec(naked) void FakeSymUnDName() { _asm { jmp[dbghelp.OrignalSymUnDName] } }
__declspec(naked) void FakeSymUnDName64() { _asm { jmp[dbghelp.OrignalSymUnDName64] } }
__declspec(naked) void FakeSymUnloadModule() { _asm { jmp[dbghelp.OrignalSymUnloadModule] } }
__declspec(naked) void FakeSymUnloadModule64() { _asm { jmp[dbghelp.OrignalSymUnloadModule64] } }
__declspec(naked) void FakeUnDecorateSymbolName() { _asm { jmp[dbghelp.OrignalUnDecorateSymbolName] } }
__declspec(naked) void FakeUnDecorateSymbolNameW() { _asm { jmp[dbghelp.OrignalUnDecorateSymbolNameW] } }
__declspec(naked) void FakeUnmapDebugInformation() { _asm { jmp[dbghelp.OrignalUnmapDebugInformation] } }
__declspec(naked) void FakeWinDbgExtensionDllInit() { _asm { jmp[dbghelp.OrignalWinDbgExtensionDllInit] } }
__declspec(naked) void Fake_EFN_DumpImage() { _asm { jmp[dbghelp.Orignal_EFN_DumpImage] } }
__declspec(naked) void Fakeblock() { _asm { jmp[dbghelp.Orignalblock] } }
__declspec(naked) void Fakechksym() { _asm { jmp[dbghelp.Orignalchksym] } }
__declspec(naked) void Fakedbghelp() { _asm { jmp[dbghelp.Orignaldbghelp] } }
__declspec(naked) void Fakedh() { _asm { jmp[dbghelp.Orignaldh] } }
__declspec(naked) void Fakefptr() { _asm { jmp[dbghelp.Orignalfptr] } }
__declspec(naked) void Fakehomedir() { _asm { jmp[dbghelp.Orignalhomedir] } }
__declspec(naked) void Fakeinlinedbg() { _asm { jmp[dbghelp.Orignalinlinedbg] } }
__declspec(naked) void Fakeitoldyouso() { _asm { jmp[dbghelp.Orignalitoldyouso] } }
__declspec(naked) void Fakelmi() { _asm { jmp[dbghelp.Orignallmi] } }
__declspec(naked) void Fakelminfo() { _asm { jmp[dbghelp.Orignallminfo] } }
__declspec(naked) void Fakeomap() { _asm { jmp[dbghelp.Orignalomap] } }
__declspec(naked) void Fakeoptdbgdump() { _asm { jmp[dbghelp.Orignaloptdbgdump] } }
__declspec(naked) void Fakeoptdbgdumpaddr() { _asm { jmp[dbghelp.Orignaloptdbgdumpaddr] } }
__declspec(naked) void Fakesrcfiles() { _asm { jmp[dbghelp.Orignalsrcfiles] } }
__declspec(naked) void Fakestack_force_ebp() { _asm { jmp[dbghelp.Orignalstack_force_ebp] } }
__declspec(naked) void Fakestackdbg() { _asm { jmp[dbghelp.Orignalstackdbg] } }
__declspec(naked) void Fakesym() { _asm { jmp[dbghelp.Orignalsym] } }
__declspec(naked) void Fakesymsrv() { _asm { jmp[dbghelp.Orignalsymsrv] } }
__declspec(naked) void Fakevc7fpo() { _asm { jmp[dbghelp.Orignalvc7fpo] } }

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
	char path[MAX_PATH];
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	{
		CopyMemory(path + GetSystemDirectory(path, MAX_PATH - 13), "\\dbghelp.dll", 14);
		dbghelp.dll = LoadLibrary(path);
		if (dbghelp.dll == NULL)
		{
			MessageBox(0, "Cannot load original dbghelp.dll library", "Proxy", MB_ICONERROR);
			ExitProcess(0);
		}
		dbghelp.OrignalDbgHelpCreateUserDump = GetProcAddress(dbghelp.dll, "DbgHelpCreateUserDump");
		dbghelp.OrignalDbgHelpCreateUserDumpW = GetProcAddress(dbghelp.dll, "DbgHelpCreateUserDumpW");
		dbghelp.OrignalEnumDirTree = GetProcAddress(dbghelp.dll, "EnumDirTree");
		dbghelp.OrignalEnumDirTreeW = GetProcAddress(dbghelp.dll, "EnumDirTreeW");
		dbghelp.OrignalEnumerateLoadedModules = GetProcAddress(dbghelp.dll, "EnumerateLoadedModules");
		dbghelp.OrignalEnumerateLoadedModules64 = GetProcAddress(dbghelp.dll, "EnumerateLoadedModules64");
		dbghelp.OrignalEnumerateLoadedModulesEx = GetProcAddress(dbghelp.dll, "EnumerateLoadedModulesEx");
		dbghelp.OrignalEnumerateLoadedModulesExW = GetProcAddress(dbghelp.dll, "EnumerateLoadedModulesExW");
		dbghelp.OrignalEnumerateLoadedModulesW64 = GetProcAddress(dbghelp.dll, "EnumerateLoadedModulesW64");
		dbghelp.OrignalExtensionApiVersion = GetProcAddress(dbghelp.dll, "ExtensionApiVersion");
		dbghelp.OrignalFindDebugInfoFile = GetProcAddress(dbghelp.dll, "FindDebugInfoFile");
		dbghelp.OrignalFindDebugInfoFileEx = GetProcAddress(dbghelp.dll, "FindDebugInfoFileEx");
		dbghelp.OrignalFindDebugInfoFileExW = GetProcAddress(dbghelp.dll, "FindDebugInfoFileExW");
		dbghelp.OrignalFindExecutableImage = GetProcAddress(dbghelp.dll, "FindExecutableImage");
		dbghelp.OrignalFindExecutableImageEx = GetProcAddress(dbghelp.dll, "FindExecutableImageEx");
		dbghelp.OrignalFindExecutableImageExW = GetProcAddress(dbghelp.dll, "FindExecutableImageExW");
		dbghelp.OrignalFindFileInPath = GetProcAddress(dbghelp.dll, "FindFileInPath");
		dbghelp.OrignalFindFileInSearchPath = GetProcAddress(dbghelp.dll, "FindFileInSearchPath");
		dbghelp.OrignalGetSymLoadError = GetProcAddress(dbghelp.dll, "GetSymLoadError");
		dbghelp.OrignalGetTimestampForLoadedLibrary = GetProcAddress(dbghelp.dll, "GetTimestampForLoadedLibrary");
		dbghelp.OrignalImageDirectoryEntryToData = GetProcAddress(dbghelp.dll, "ImageDirectoryEntryToData");
		dbghelp.OrignalImageDirectoryEntryToDataEx = GetProcAddress(dbghelp.dll, "ImageDirectoryEntryToDataEx");
		dbghelp.OrignalImageNtHeader = GetProcAddress(dbghelp.dll, "ImageNtHeader");
		dbghelp.OrignalImageRvaToSection = GetProcAddress(dbghelp.dll, "ImageRvaToSection");
		dbghelp.OrignalImageRvaToVa = GetProcAddress(dbghelp.dll, "ImageRvaToVa");
		dbghelp.OrignalImagehlpApiVersion = GetProcAddress(dbghelp.dll, "ImagehlpApiVersion");
		dbghelp.OrignalImagehlpApiVersionEx = GetProcAddress(dbghelp.dll, "ImagehlpApiVersionEx");
		dbghelp.OrignalMakeSureDirectoryPathExists = GetProcAddress(dbghelp.dll, "MakeSureDirectoryPathExists");
		dbghelp.OrignalMapDebugInformation = GetProcAddress(dbghelp.dll, "MapDebugInformation");
		dbghelp.OrignalMiniDumpReadDumpStream = GetProcAddress(dbghelp.dll, "MiniDumpReadDumpStream");
		dbghelp.OrignalMiniDumpWriteDump = GetProcAddress(dbghelp.dll, "MiniDumpWriteDump");
		dbghelp.OrignalRangeMapAddPeImageSections = GetProcAddress(dbghelp.dll, "RangeMapAddPeImageSections");
		dbghelp.OrignalRangeMapCreate = GetProcAddress(dbghelp.dll, "RangeMapCreate");
		dbghelp.OrignalRangeMapFree = GetProcAddress(dbghelp.dll, "RangeMapFree");
		dbghelp.OrignalRangeMapRead = GetProcAddress(dbghelp.dll, "RangeMapRead");
		dbghelp.OrignalRangeMapRemove = GetProcAddress(dbghelp.dll, "RangeMapRemove");
		dbghelp.OrignalRangeMapWrite = GetProcAddress(dbghelp.dll, "RangeMapWrite");
		dbghelp.OrignalRemoveInvalidModuleList = GetProcAddress(dbghelp.dll, "RemoveInvalidModuleList");
		dbghelp.OrignalReportSymbolLoadSummary = GetProcAddress(dbghelp.dll, "ReportSymbolLoadSummary");
		dbghelp.OrignalSearchTreeForFile = GetProcAddress(dbghelp.dll, "SearchTreeForFile");
		dbghelp.OrignalSearchTreeForFileW = GetProcAddress(dbghelp.dll, "SearchTreeForFileW");
		dbghelp.OrignalSetCheckUserInterruptShared = GetProcAddress(dbghelp.dll, "SetCheckUserInterruptShared");
		dbghelp.OrignalSetSymLoadError = GetProcAddress(dbghelp.dll, "SetSymLoadError");
		dbghelp.OrignalStackWalk = GetProcAddress(dbghelp.dll, "StackWalk");
		dbghelp.OrignalStackWalk64 = GetProcAddress(dbghelp.dll, "StackWalk64");
		dbghelp.OrignalStackWalkEx = GetProcAddress(dbghelp.dll, "StackWalkEx");
		dbghelp.OrignalSymAddSourceStream = GetProcAddress(dbghelp.dll, "SymAddSourceStream");
		dbghelp.OrignalSymAddSourceStreamA = GetProcAddress(dbghelp.dll, "SymAddSourceStreamA");
		dbghelp.OrignalSymAddSourceStreamW = GetProcAddress(dbghelp.dll, "SymAddSourceStreamW");
		dbghelp.OrignalSymAddSymbol = GetProcAddress(dbghelp.dll, "SymAddSymbol");
		dbghelp.OrignalSymAddSymbolW = GetProcAddress(dbghelp.dll, "SymAddSymbolW");
		dbghelp.OrignalSymAddrIncludeInlineTrace = GetProcAddress(dbghelp.dll, "SymAddrIncludeInlineTrace");
		dbghelp.OrignalSymAllocDiaString = GetProcAddress(dbghelp.dll, "SymAllocDiaString");
		dbghelp.OrignalSymCleanup = GetProcAddress(dbghelp.dll, "SymCleanup");
		dbghelp.OrignalSymCompareInlineTrace = GetProcAddress(dbghelp.dll, "SymCompareInlineTrace");
		dbghelp.OrignalSymDeleteSymbol = GetProcAddress(dbghelp.dll, "SymDeleteSymbol");
		dbghelp.OrignalSymDeleteSymbolW = GetProcAddress(dbghelp.dll, "SymDeleteSymbolW");
		dbghelp.OrignalSymEnumLines = GetProcAddress(dbghelp.dll, "SymEnumLines");
		dbghelp.OrignalSymEnumLinesW = GetProcAddress(dbghelp.dll, "SymEnumLinesW");
		dbghelp.OrignalSymEnumProcesses = GetProcAddress(dbghelp.dll, "SymEnumProcesses");
		dbghelp.OrignalSymEnumSourceFileTokens = GetProcAddress(dbghelp.dll, "SymEnumSourceFileTokens");
		dbghelp.OrignalSymEnumSourceFiles = GetProcAddress(dbghelp.dll, "SymEnumSourceFiles");
		dbghelp.OrignalSymEnumSourceFilesW = GetProcAddress(dbghelp.dll, "SymEnumSourceFilesW");
		dbghelp.OrignalSymEnumSourceLines = GetProcAddress(dbghelp.dll, "SymEnumSourceLines");
		dbghelp.OrignalSymEnumSourceLinesW = GetProcAddress(dbghelp.dll, "SymEnumSourceLinesW");
		dbghelp.OrignalSymEnumSym = GetProcAddress(dbghelp.dll, "SymEnumSym");
		dbghelp.OrignalSymEnumSymbols = GetProcAddress(dbghelp.dll, "SymEnumSymbols");
		dbghelp.OrignalSymEnumSymbolsEx = GetProcAddress(dbghelp.dll, "SymEnumSymbolsEx");
		dbghelp.OrignalSymEnumSymbolsExW = GetProcAddress(dbghelp.dll, "SymEnumSymbolsExW");
		dbghelp.OrignalSymEnumSymbolsForAddr = GetProcAddress(dbghelp.dll, "SymEnumSymbolsForAddr");
		dbghelp.OrignalSymEnumSymbolsForAddrW = GetProcAddress(dbghelp.dll, "SymEnumSymbolsForAddrW");
		dbghelp.OrignalSymEnumSymbolsW = GetProcAddress(dbghelp.dll, "SymEnumSymbolsW");
		dbghelp.OrignalSymEnumTypes = GetProcAddress(dbghelp.dll, "SymEnumTypes");
		dbghelp.OrignalSymEnumTypesByName = GetProcAddress(dbghelp.dll, "SymEnumTypesByName");
		dbghelp.OrignalSymEnumTypesByNameW = GetProcAddress(dbghelp.dll, "SymEnumTypesByNameW");
		dbghelp.OrignalSymEnumTypesW = GetProcAddress(dbghelp.dll, "SymEnumTypesW");
		dbghelp.OrignalSymEnumerateModules = GetProcAddress(dbghelp.dll, "SymEnumerateModules");
		dbghelp.OrignalSymEnumerateModules64 = GetProcAddress(dbghelp.dll, "SymEnumerateModules64");
		dbghelp.OrignalSymEnumerateModulesW64 = GetProcAddress(dbghelp.dll, "SymEnumerateModulesW64");
		dbghelp.OrignalSymEnumerateSymbols = GetProcAddress(dbghelp.dll, "SymEnumerateSymbols");
		dbghelp.OrignalSymEnumerateSymbols64 = GetProcAddress(dbghelp.dll, "SymEnumerateSymbols64");
		dbghelp.OrignalSymEnumerateSymbolsW = GetProcAddress(dbghelp.dll, "SymEnumerateSymbolsW");
		dbghelp.OrignalSymEnumerateSymbolsW64 = GetProcAddress(dbghelp.dll, "SymEnumerateSymbolsW64");
		dbghelp.OrignalSymFindDebugInfoFile = GetProcAddress(dbghelp.dll, "SymFindDebugInfoFile");
		dbghelp.OrignalSymFindDebugInfoFileW = GetProcAddress(dbghelp.dll, "SymFindDebugInfoFileW");
		dbghelp.OrignalSymFindExecutableImage = GetProcAddress(dbghelp.dll, "SymFindExecutableImage");
		dbghelp.OrignalSymFindExecutableImageW = GetProcAddress(dbghelp.dll, "SymFindExecutableImageW");
		dbghelp.OrignalSymFindFileInPath = GetProcAddress(dbghelp.dll, "SymFindFileInPath");
		dbghelp.OrignalSymFindFileInPathW = GetProcAddress(dbghelp.dll, "SymFindFileInPathW");
		dbghelp.OrignalSymFreeDiaString = GetProcAddress(dbghelp.dll, "SymFreeDiaString");
		dbghelp.OrignalSymFromAddr = GetProcAddress(dbghelp.dll, "SymFromAddr");
		dbghelp.OrignalSymFromAddrW = GetProcAddress(dbghelp.dll, "SymFromAddrW");
		dbghelp.OrignalSymFromIndex = GetProcAddress(dbghelp.dll, "SymFromIndex");
		dbghelp.OrignalSymFromIndexW = GetProcAddress(dbghelp.dll, "SymFromIndexW");
		dbghelp.OrignalSymFromInlineContext = GetProcAddress(dbghelp.dll, "SymFromInlineContext");
		dbghelp.OrignalSymFromInlineContextW = GetProcAddress(dbghelp.dll, "SymFromInlineContextW");
		dbghelp.OrignalSymFromName = GetProcAddress(dbghelp.dll, "SymFromName");
		dbghelp.OrignalSymFromNameW = GetProcAddress(dbghelp.dll, "SymFromNameW");
		dbghelp.OrignalSymFromToken = GetProcAddress(dbghelp.dll, "SymFromToken");
		dbghelp.OrignalSymFromTokenW = GetProcAddress(dbghelp.dll, "SymFromTokenW");
		dbghelp.OrignalSymFunctionTableAccess = GetProcAddress(dbghelp.dll, "SymFunctionTableAccess");
		dbghelp.OrignalSymFunctionTableAccess64 = GetProcAddress(dbghelp.dll, "SymFunctionTableAccess64");
		dbghelp.OrignalSymFunctionTableAccess64AccessRoutines = GetProcAddress(dbghelp.dll, "SymFunctionTableAccess64AccessRoutines");
		dbghelp.OrignalSymGetDiaSession = GetProcAddress(dbghelp.dll, "SymGetDiaSession");
		dbghelp.OrignalSymGetExtendedOption = GetProcAddress(dbghelp.dll, "SymGetExtendedOption");
		dbghelp.OrignalSymGetFileLineOffsets64 = GetProcAddress(dbghelp.dll, "SymGetFileLineOffsets64");
		dbghelp.OrignalSymGetHomeDirectory = GetProcAddress(dbghelp.dll, "SymGetHomeDirectory");
		dbghelp.OrignalSymGetHomeDirectoryW = GetProcAddress(dbghelp.dll, "SymGetHomeDirectoryW");
		dbghelp.OrignalSymGetLineFromAddr = GetProcAddress(dbghelp.dll, "SymGetLineFromAddr");
		dbghelp.OrignalSymGetLineFromAddr64 = GetProcAddress(dbghelp.dll, "SymGetLineFromAddr64");
		dbghelp.OrignalSymGetLineFromAddrW64 = GetProcAddress(dbghelp.dll, "SymGetLineFromAddrW64");
		dbghelp.OrignalSymGetLineFromInlineContext = GetProcAddress(dbghelp.dll, "SymGetLineFromInlineContext");
		dbghelp.OrignalSymGetLineFromInlineContextW = GetProcAddress(dbghelp.dll, "SymGetLineFromInlineContextW");
		dbghelp.OrignalSymGetLineFromName = GetProcAddress(dbghelp.dll, "SymGetLineFromName");
		dbghelp.OrignalSymGetLineFromName64 = GetProcAddress(dbghelp.dll, "SymGetLineFromName64");
		dbghelp.OrignalSymGetLineFromNameW64 = GetProcAddress(dbghelp.dll, "SymGetLineFromNameW64");
		dbghelp.OrignalSymGetLineNext = GetProcAddress(dbghelp.dll, "SymGetLineNext");
		dbghelp.OrignalSymGetLineNext64 = GetProcAddress(dbghelp.dll, "SymGetLineNext64");
		dbghelp.OrignalSymGetLineNextW64 = GetProcAddress(dbghelp.dll, "SymGetLineNextW64");
		dbghelp.OrignalSymGetLinePrev = GetProcAddress(dbghelp.dll, "SymGetLinePrev");
		dbghelp.OrignalSymGetLinePrev64 = GetProcAddress(dbghelp.dll, "SymGetLinePrev64");
		dbghelp.OrignalSymGetLinePrevW64 = GetProcAddress(dbghelp.dll, "SymGetLinePrevW64");
		dbghelp.OrignalSymGetModuleBase = GetProcAddress(dbghelp.dll, "SymGetModuleBase");
		dbghelp.OrignalSymGetModuleBase64 = GetProcAddress(dbghelp.dll, "SymGetModuleBase64");
		dbghelp.OrignalSymGetModuleInfo = GetProcAddress(dbghelp.dll, "SymGetModuleInfo");
		dbghelp.OrignalSymGetModuleInfo64 = GetProcAddress(dbghelp.dll, "SymGetModuleInfo64");
		dbghelp.OrignalSymGetModuleInfoW = GetProcAddress(dbghelp.dll, "SymGetModuleInfoW");
		dbghelp.OrignalSymGetModuleInfoW64 = GetProcAddress(dbghelp.dll, "SymGetModuleInfoW64");
		dbghelp.OrignalSymGetOmapBlockBase = GetProcAddress(dbghelp.dll, "SymGetOmapBlockBase");
		dbghelp.OrignalSymGetOmaps = GetProcAddress(dbghelp.dll, "SymGetOmaps");
		dbghelp.OrignalSymGetOptions = GetProcAddress(dbghelp.dll, "SymGetOptions");
		dbghelp.OrignalSymGetScope = GetProcAddress(dbghelp.dll, "SymGetScope");
		dbghelp.OrignalSymGetScopeW = GetProcAddress(dbghelp.dll, "SymGetScopeW");
		dbghelp.OrignalSymGetSearchPath = GetProcAddress(dbghelp.dll, "SymGetSearchPath");
		dbghelp.OrignalSymGetSearchPathW = GetProcAddress(dbghelp.dll, "SymGetSearchPathW");
		dbghelp.OrignalSymGetSourceFile = GetProcAddress(dbghelp.dll, "SymGetSourceFile");
		dbghelp.OrignalSymGetSourceFileChecksum = GetProcAddress(dbghelp.dll, "SymGetSourceFileChecksum");
		dbghelp.OrignalSymGetSourceFileChecksumW = GetProcAddress(dbghelp.dll, "SymGetSourceFileChecksumW");
		dbghelp.OrignalSymGetSourceFileFromToken = GetProcAddress(dbghelp.dll, "SymGetSourceFileFromToken");
		dbghelp.OrignalSymGetSourceFileFromTokenW = GetProcAddress(dbghelp.dll, "SymGetSourceFileFromTokenW");
		dbghelp.OrignalSymGetSourceFileToken = GetProcAddress(dbghelp.dll, "SymGetSourceFileToken");
		dbghelp.OrignalSymGetSourceFileTokenW = GetProcAddress(dbghelp.dll, "SymGetSourceFileTokenW");
		dbghelp.OrignalSymGetSourceFileW = GetProcAddress(dbghelp.dll, "SymGetSourceFileW");
		dbghelp.OrignalSymGetSourceVarFromToken = GetProcAddress(dbghelp.dll, "SymGetSourceVarFromToken");
		dbghelp.OrignalSymGetSourceVarFromTokenW = GetProcAddress(dbghelp.dll, "SymGetSourceVarFromTokenW");
		dbghelp.OrignalSymGetSymFromAddr = GetProcAddress(dbghelp.dll, "SymGetSymFromAddr");
		dbghelp.OrignalSymGetSymFromAddr64 = GetProcAddress(dbghelp.dll, "SymGetSymFromAddr64");
		dbghelp.OrignalSymGetSymFromName = GetProcAddress(dbghelp.dll, "SymGetSymFromName");
		dbghelp.OrignalSymGetSymFromName64 = GetProcAddress(dbghelp.dll, "SymGetSymFromName64");
		dbghelp.OrignalSymGetSymNext = GetProcAddress(dbghelp.dll, "SymGetSymNext");
		dbghelp.OrignalSymGetSymNext64 = GetProcAddress(dbghelp.dll, "SymGetSymNext64");
		dbghelp.OrignalSymGetSymPrev = GetProcAddress(dbghelp.dll, "SymGetSymPrev");
		dbghelp.OrignalSymGetSymPrev64 = GetProcAddress(dbghelp.dll, "SymGetSymPrev64");
		dbghelp.OrignalSymGetSymbolFile = GetProcAddress(dbghelp.dll, "SymGetSymbolFile");
		dbghelp.OrignalSymGetSymbolFileW = GetProcAddress(dbghelp.dll, "SymGetSymbolFileW");
		dbghelp.OrignalSymGetTypeFromName = GetProcAddress(dbghelp.dll, "SymGetTypeFromName");
		dbghelp.OrignalSymGetTypeFromNameW = GetProcAddress(dbghelp.dll, "SymGetTypeFromNameW");
		dbghelp.OrignalSymGetTypeInfo = GetProcAddress(dbghelp.dll, "SymGetTypeInfo");
		dbghelp.OrignalSymGetTypeInfoEx = GetProcAddress(dbghelp.dll, "SymGetTypeInfoEx");
		dbghelp.OrignalSymGetUnwindInfo = GetProcAddress(dbghelp.dll, "SymGetUnwindInfo");
		dbghelp.OrignalSymInitialize = GetProcAddress(dbghelp.dll, "SymInitialize");
		dbghelp.OrignalSymInitializeW = GetProcAddress(dbghelp.dll, "SymInitializeW");
		dbghelp.OrignalSymLoadModule = GetProcAddress(dbghelp.dll, "SymLoadModule");
		dbghelp.OrignalSymLoadModule64 = GetProcAddress(dbghelp.dll, "SymLoadModule64");
		dbghelp.OrignalSymLoadModuleEx = GetProcAddress(dbghelp.dll, "SymLoadModuleEx");
		dbghelp.OrignalSymLoadModuleExW = GetProcAddress(dbghelp.dll, "SymLoadModuleExW");
		dbghelp.OrignalSymMatchFileName = GetProcAddress(dbghelp.dll, "SymMatchFileName");
		dbghelp.OrignalSymMatchFileNameW = GetProcAddress(dbghelp.dll, "SymMatchFileNameW");
		dbghelp.OrignalSymMatchString = GetProcAddress(dbghelp.dll, "SymMatchString");
		dbghelp.OrignalSymMatchStringA = GetProcAddress(dbghelp.dll, "SymMatchStringA");
		dbghelp.OrignalSymMatchStringW = GetProcAddress(dbghelp.dll, "SymMatchStringW");
		dbghelp.OrignalSymNext = GetProcAddress(dbghelp.dll, "SymNext");
		dbghelp.OrignalSymNextW = GetProcAddress(dbghelp.dll, "SymNextW");
		dbghelp.OrignalSymPrev = GetProcAddress(dbghelp.dll, "SymPrev");
		dbghelp.OrignalSymPrevW = GetProcAddress(dbghelp.dll, "SymPrevW");
		dbghelp.OrignalSymQueryInlineTrace = GetProcAddress(dbghelp.dll, "SymQueryInlineTrace");
		dbghelp.OrignalSymRefreshModuleList = GetProcAddress(dbghelp.dll, "SymRefreshModuleList");
		dbghelp.OrignalSymRegisterCallback = GetProcAddress(dbghelp.dll, "SymRegisterCallback");
		dbghelp.OrignalSymRegisterCallback64 = GetProcAddress(dbghelp.dll, "SymRegisterCallback64");
		dbghelp.OrignalSymRegisterCallbackW64 = GetProcAddress(dbghelp.dll, "SymRegisterCallbackW64");
		dbghelp.OrignalSymRegisterFunctionEntryCallback = GetProcAddress(dbghelp.dll, "SymRegisterFunctionEntryCallback");
		dbghelp.OrignalSymRegisterFunctionEntryCallback64 = GetProcAddress(dbghelp.dll, "SymRegisterFunctionEntryCallback64");
		dbghelp.OrignalSymSearch = GetProcAddress(dbghelp.dll, "SymSearch");
		dbghelp.OrignalSymSearchW = GetProcAddress(dbghelp.dll, "SymSearchW");
		dbghelp.OrignalSymSetContext = GetProcAddress(dbghelp.dll, "SymSetContext");
		dbghelp.OrignalSymSetDiaSession = GetProcAddress(dbghelp.dll, "SymSetDiaSession");
		dbghelp.OrignalSymSetExtendedOption = GetProcAddress(dbghelp.dll, "SymSetExtendedOption");
		dbghelp.OrignalSymSetHomeDirectory = GetProcAddress(dbghelp.dll, "SymSetHomeDirectory");
		dbghelp.OrignalSymSetHomeDirectoryW = GetProcAddress(dbghelp.dll, "SymSetHomeDirectoryW");
		dbghelp.OrignalSymSetOptions = GetProcAddress(dbghelp.dll, "SymSetOptions");
		dbghelp.OrignalSymSetParentWindow = GetProcAddress(dbghelp.dll, "SymSetParentWindow");
		dbghelp.OrignalSymSetScopeFromAddr = GetProcAddress(dbghelp.dll, "SymSetScopeFromAddr");
		dbghelp.OrignalSymSetScopeFromIndex = GetProcAddress(dbghelp.dll, "SymSetScopeFromIndex");
		dbghelp.OrignalSymSetScopeFromInlineContext = GetProcAddress(dbghelp.dll, "SymSetScopeFromInlineContext");
		dbghelp.OrignalSymSetSearchPath = GetProcAddress(dbghelp.dll, "SymSetSearchPath");
		dbghelp.OrignalSymSetSearchPathW = GetProcAddress(dbghelp.dll, "SymSetSearchPathW");
		dbghelp.OrignalSymSrvDeltaName = GetProcAddress(dbghelp.dll, "SymSrvDeltaName");
		dbghelp.OrignalSymSrvDeltaNameW = GetProcAddress(dbghelp.dll, "SymSrvDeltaNameW");
		dbghelp.OrignalSymSrvGetFileIndexInfo = GetProcAddress(dbghelp.dll, "SymSrvGetFileIndexInfo");
		dbghelp.OrignalSymSrvGetFileIndexInfoW = GetProcAddress(dbghelp.dll, "SymSrvGetFileIndexInfoW");
		dbghelp.OrignalSymSrvGetFileIndexString = GetProcAddress(dbghelp.dll, "SymSrvGetFileIndexString");
		dbghelp.OrignalSymSrvGetFileIndexStringW = GetProcAddress(dbghelp.dll, "SymSrvGetFileIndexStringW");
		dbghelp.OrignalSymSrvGetFileIndexes = GetProcAddress(dbghelp.dll, "SymSrvGetFileIndexes");
		dbghelp.OrignalSymSrvGetFileIndexesW = GetProcAddress(dbghelp.dll, "SymSrvGetFileIndexesW");
		dbghelp.OrignalSymSrvGetSupplement = GetProcAddress(dbghelp.dll, "SymSrvGetSupplement");
		dbghelp.OrignalSymSrvGetSupplementW = GetProcAddress(dbghelp.dll, "SymSrvGetSupplementW");
		dbghelp.OrignalSymSrvIsStore = GetProcAddress(dbghelp.dll, "SymSrvIsStore");
		dbghelp.OrignalSymSrvIsStoreW = GetProcAddress(dbghelp.dll, "SymSrvIsStoreW");
		dbghelp.OrignalSymSrvStoreFile = GetProcAddress(dbghelp.dll, "SymSrvStoreFile");
		dbghelp.OrignalSymSrvStoreFileW = GetProcAddress(dbghelp.dll, "SymSrvStoreFileW");
		dbghelp.OrignalSymSrvStoreSupplement = GetProcAddress(dbghelp.dll, "SymSrvStoreSupplement");
		dbghelp.OrignalSymSrvStoreSupplementW = GetProcAddress(dbghelp.dll, "SymSrvStoreSupplementW");
		dbghelp.OrignalSymUnDName = GetProcAddress(dbghelp.dll, "SymUnDName");
		dbghelp.OrignalSymUnDName64 = GetProcAddress(dbghelp.dll, "SymUnDName64");
		dbghelp.OrignalSymUnloadModule = GetProcAddress(dbghelp.dll, "SymUnloadModule");
		dbghelp.OrignalSymUnloadModule64 = GetProcAddress(dbghelp.dll, "SymUnloadModule64");
		dbghelp.OrignalUnDecorateSymbolName = GetProcAddress(dbghelp.dll, "UnDecorateSymbolName");
		dbghelp.OrignalUnDecorateSymbolNameW = GetProcAddress(dbghelp.dll, "UnDecorateSymbolNameW");
		dbghelp.OrignalUnmapDebugInformation = GetProcAddress(dbghelp.dll, "UnmapDebugInformation");
		dbghelp.OrignalWinDbgExtensionDllInit = GetProcAddress(dbghelp.dll, "WinDbgExtensionDllInit");
		dbghelp.Orignal_EFN_DumpImage = GetProcAddress(dbghelp.dll, "_EFN_DumpImage");
		dbghelp.Orignalblock = GetProcAddress(dbghelp.dll, "block");
		dbghelp.Orignalchksym = GetProcAddress(dbghelp.dll, "chksym");
		dbghelp.Orignaldbghelp = GetProcAddress(dbghelp.dll, "dbghelp");
		dbghelp.Orignaldh = GetProcAddress(dbghelp.dll, "dh");
		dbghelp.Orignalfptr = GetProcAddress(dbghelp.dll, "fptr");
		dbghelp.Orignalhomedir = GetProcAddress(dbghelp.dll, "homedir");
		dbghelp.Orignalinlinedbg = GetProcAddress(dbghelp.dll, "inlinedbg");
		dbghelp.Orignalitoldyouso = GetProcAddress(dbghelp.dll, "itoldyouso");
		dbghelp.Orignallmi = GetProcAddress(dbghelp.dll, "lmi");
		dbghelp.Orignallminfo = GetProcAddress(dbghelp.dll, "lminfo");
		dbghelp.Orignalomap = GetProcAddress(dbghelp.dll, "omap");
		dbghelp.Orignaloptdbgdump = GetProcAddress(dbghelp.dll, "optdbgdump");
		dbghelp.Orignaloptdbgdumpaddr = GetProcAddress(dbghelp.dll, "optdbgdumpaddr");
		dbghelp.Orignalsrcfiles = GetProcAddress(dbghelp.dll, "srcfiles");
		dbghelp.Orignalstack_force_ebp = GetProcAddress(dbghelp.dll, "stack_force_ebp");
		dbghelp.Orignalstackdbg = GetProcAddress(dbghelp.dll, "stackdbg");
		dbghelp.Orignalsym = GetProcAddress(dbghelp.dll, "sym");
		dbghelp.Orignalsymsrv = GetProcAddress(dbghelp.dll, "symsrv");
		dbghelp.Orignalvc7fpo = GetProcAddress(dbghelp.dll, "vc7fpo");

		main();

		break;
	}
	case DLL_PROCESS_DETACH:
	{
		FreeLibrary(dbghelp.dll);
	}
	break;
	}
	return TRUE;
}
