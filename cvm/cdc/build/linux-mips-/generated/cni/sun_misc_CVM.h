/* DO NOT EDIT THIS FILE - it is machine generated */
#include "javavm/include/cni.h"
/* Header for class sun/misc/CVM */

#ifndef _CVM_CNIsun_misc_CVM
#define _CVM_CNIsun_misc_CVM
#undef sun_misc_CVM_ARG_PARSE_UNINIT
#define sun_misc_CVM_ARG_PARSE_UNINIT 0L
#undef sun_misc_CVM_ARG_PARSE_OK
#define sun_misc_CVM_ARG_PARSE_OK 1L
#undef sun_misc_CVM_ARG_PARSE_ERR
#define sun_misc_CVM_ARG_PARSE_ERR 2L
#undef sun_misc_CVM_ARG_PARSE_EXITVM
#define sun_misc_CVM_ARG_PARSE_EXITVM 3L
#undef sun_misc_CVM_ARG_PARSE_USAGE
#define sun_misc_CVM_ARG_PARSE_USAGE 4L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_OPCODE
#define sun_misc_CVM_DEBUGFLAG_TRACE_OPCODE 1L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_METHOD
#define sun_misc_CVM_DEBUGFLAG_TRACE_METHOD 2L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_STATUS
#define sun_misc_CVM_DEBUGFLAG_TRACE_STATUS 4L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_FASTLOCK
#define sun_misc_CVM_DEBUGFLAG_TRACE_FASTLOCK 8L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_DETLOCK
#define sun_misc_CVM_DEBUGFLAG_TRACE_DETLOCK 16L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_MUTEX
#define sun_misc_CVM_DEBUGFLAG_TRACE_MUTEX 32L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_CS
#define sun_misc_CVM_DEBUGFLAG_TRACE_CS 64L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_GCSTARTSTOP
#define sun_misc_CVM_DEBUGFLAG_TRACE_GCSTARTSTOP 128L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_GCSCAN
#define sun_misc_CVM_DEBUGFLAG_TRACE_GCSCAN 256L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_GCSCANOBJ
#define sun_misc_CVM_DEBUGFLAG_TRACE_GCSCANOBJ 512L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_GCALLOC
#define sun_misc_CVM_DEBUGFLAG_TRACE_GCALLOC 1024L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_GCCOLLECT
#define sun_misc_CVM_DEBUGFLAG_TRACE_GCCOLLECT 2048L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_GCSAFETY
#define sun_misc_CVM_DEBUGFLAG_TRACE_GCSAFETY 4096L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_CLINIT
#define sun_misc_CVM_DEBUGFLAG_TRACE_CLINIT 8192L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_EXCEPTIONS
#define sun_misc_CVM_DEBUGFLAG_TRACE_EXCEPTIONS 16384L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_MISC
#define sun_misc_CVM_DEBUGFLAG_TRACE_MISC 32768L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_BARRIERS
#define sun_misc_CVM_DEBUGFLAG_TRACE_BARRIERS 65536L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_STACKMAPS
#define sun_misc_CVM_DEBUGFLAG_TRACE_STACKMAPS 131072L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_CLASSLOADING
#define sun_misc_CVM_DEBUGFLAG_TRACE_CLASSLOADING 262144L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_CLASSLOOKUP
#define sun_misc_CVM_DEBUGFLAG_TRACE_CLASSLOOKUP 524288L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_TYPEID
#define sun_misc_CVM_DEBUGFLAG_TRACE_TYPEID 1048576L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_VERIFIER
#define sun_misc_CVM_DEBUGFLAG_TRACE_VERIFIER 2097152L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_WEAKREFS
#define sun_misc_CVM_DEBUGFLAG_TRACE_WEAKREFS 4194304L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_CLASSUNLOAD
#define sun_misc_CVM_DEBUGFLAG_TRACE_CLASSUNLOAD 8388608L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_CLASSLINK
#define sun_misc_CVM_DEBUGFLAG_TRACE_CLASSLINK 16777216L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_LVM
#define sun_misc_CVM_DEBUGFLAG_TRACE_LVM 33554432L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_JVMTI
#define sun_misc_CVM_DEBUGFLAG_TRACE_JVMTI 67108864L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_JITSTATUS
#define sun_misc_CVM_DEBUGFLAG_TRACE_JITSTATUS 1L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_JITBCTOIR
#define sun_misc_CVM_DEBUGFLAG_TRACE_JITBCTOIR 2L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_JITCODEGEN
#define sun_misc_CVM_DEBUGFLAG_TRACE_JITCODEGEN 4L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_JITSTATS
#define sun_misc_CVM_DEBUGFLAG_TRACE_JITSTATS 8L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_JITIROPT
#define sun_misc_CVM_DEBUGFLAG_TRACE_JITIROPT 16L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_JITINLINING
#define sun_misc_CVM_DEBUGFLAG_TRACE_JITINLINING 32L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_JITOSR
#define sun_misc_CVM_DEBUGFLAG_TRACE_JITOSR 64L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_JITREGLOCALS
#define sun_misc_CVM_DEBUGFLAG_TRACE_JITREGLOCALS 128L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_JITERROR
#define sun_misc_CVM_DEBUGFLAG_TRACE_JITERROR 256L
#undef sun_misc_CVM_DEBUGFLAG_TRACE_JITPATCHEDINVOKES
#define sun_misc_CVM_DEBUGFLAG_TRACE_JITPATCHEDINVOKES 256L
#ifdef __cplusplus
extern "C"{
#endif
/*
 * Class:	sun/misc/CVM
 * Method:	setSystemClassLoader
 * Signature:	(Ljava/lang/ClassLoader;)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_setSystemClassLoader;
/*
 * Class:	sun/misc/CVM
 * Method:	checkDebugFlags
 * Signature:	(I)I
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_checkDebugFlags;
/*
 * Class:	sun/misc/CVM
 * Method:	setDebugFlags
 * Signature:	(I)I
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_setDebugFlags;
/*
 * Class:	sun/misc/CVM
 * Method:	clearDebugFlags
 * Signature:	(I)I
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_clearDebugFlags;
/*
 * Class:	sun/misc/CVM
 * Method:	restoreDebugFlags
 * Signature:	(II)I
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_restoreDebugFlags;
/*
 * Class:	sun/misc/CVM
 * Method:	checkDebugJITFlags
 * Signature:	(I)I
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_checkDebugJITFlags;
/*
 * Class:	sun/misc/CVM
 * Method:	setDebugJITFlags
 * Signature:	(I)I
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_setDebugJITFlags;
/*
 * Class:	sun/misc/CVM
 * Method:	clearDebugJITFlags
 * Signature:	(I)I
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_clearDebugJITFlags;
/*
 * Class:	sun/misc/CVM
 * Method:	restoreDebugJITFlags
 * Signature:	(II)I
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_restoreDebugJITFlags;
/*
 * Class:	sun/misc/CVM
 * Method:	copyBooleanArray
 * Signature:	([ZI[ZII)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_copyBooleanArray;
/*
 * Class:	sun/misc/CVM
 * Method:	copyByteArray
 * Signature:	([BI[BII)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_copyByteArray;
/*
 * Class:	sun/misc/CVM
 * Method:	copyCharArray
 * Signature:	([CI[CII)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_copyCharArray;
/*
 * Class:	sun/misc/CVM
 * Method:	copyShortArray
 * Signature:	([SI[SII)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_copyShortArray;
/*
 * Class:	sun/misc/CVM
 * Method:	copyIntArray
 * Signature:	([II[III)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_copyIntArray;
/*
 * Class:	sun/misc/CVM
 * Method:	copyFloatArray
 * Signature:	([FI[FII)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_copyFloatArray;
/*
 * Class:	sun/misc/CVM
 * Method:	copyLongArray
 * Signature:	([JI[JII)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_copyLongArray;
/*
 * Class:	sun/misc/CVM
 * Method:	copyDoubleArray
 * Signature:	([DI[DII)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_copyDoubleArray;
/*
 * Class:	sun/misc/CVM
 * Method:	copyObjectArray
 * Signature:	([Ljava/lang/Object;I[Ljava/lang/Object;II)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_copyObjectArray;
/*
 * Class:	sun/misc/CVM
 * Method:	executeClinit
 * Signature:	(Ljava/lang/Class;)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_executeClinit;
/*
 * Class:	sun/misc/CVM
 * Method:	freeClinit
 * Signature:	(Ljava/lang/Class;)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_freeClinit;
/*
 * Class:	sun/misc/CVM
 * Method:	executeLoadSuperClasses
 * Signature:	(Ljava/lang/Class;)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_executeLoadSuperClasses;
/*
 * Class:	sun/misc/CVM
 * Method:	disableRemoteExceptions
 * Signature:	()V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_disableRemoteExceptions;
/*
 * Class:	sun/misc/CVM
 * Method:	enableRemoteExceptions
 * Signature:	()V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_enableRemoteExceptions;
/*
 * Class:	sun/misc/CVM
 * Method:	throwRemoteException
 * Signature:	(Ljava/lang/Thread;Ljava/lang/Throwable;)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_throwRemoteException;
/*
 * Class:	sun/misc/CVM
 * Method:	maskInterrupts
 * Signature:	()Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_maskInterrupts;
/*
 * Class:	sun/misc/CVM
 * Method:	unmaskInterrupts
 * Signature:	()V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_unmaskInterrupts;
/*
 * Class:	sun/misc/CVM
 * Method:	throwLocalException
 * Signature:	(Ljava/lang/Throwable;)Ljava/lang/Error;
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_throwLocalException;
/*
 * Class:	sun/misc/CVM
 * Method:	setContextArtificial
 * Signature:	()V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_setContextArtificial;
/*
 * Class:	sun/misc/CVM
 * Method:	callerCLIsMIDCLs
 * Signature:	()Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_callerCLIsMIDCLs;
/*
 * Class:	sun/misc/CVM
 * Method:	callerIsMidlet
 * Signature:	()Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_callerIsMidlet;
/*
 * Class:	sun/misc/CVM
 * Method:	isMIDPContext
 * Signature:	()Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_isMIDPContext;
/*
 * Class:	sun/misc/CVM
 * Method:	inMainLVM
 * Signature:	()Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_inMainLVM;
/*
 * Class:	sun/misc/CVM
 * Method:	gcDumpHeapSimple
 * Signature:	()V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_gcDumpHeapSimple;
/*
 * Class:	sun/misc/CVM
 * Method:	gcDumpHeapVerbose
 * Signature:	()V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_gcDumpHeapVerbose;
/*
 * Class:	sun/misc/CVM
 * Method:	gcDumpHeapStats
 * Signature:	()V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_gcDumpHeapStats;
/*
 * Class:	sun/misc/CVM
 * Method:	trace
 * Signature:	(I)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_trace;
/*
 * Class:	sun/misc/CVM
 * Method:	setDebugEvents
 * Signature:	(Z)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_setDebugEvents;
/*
 * Class:	sun/misc/CVM
 * Method:	postThreadExit
 * Signature:	()V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_postThreadExit;
/*
 * Class:	sun/misc/CVM
 * Method:	objectInflatePermanently
 * Signature:	(Ljava/lang/Object;)Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_objectInflatePermanently;
/*
 * Class:	sun/misc/CVM
 * Method:	setThreadNoCompilationsFlag
 * Signature:	(Z)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_setThreadNoCompilationsFlag;
/*
 * Class:	sun/misc/CVM
 * Method:	getCallerClass
 * Signature:	(I)Ljava/lang/Class;
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_getCallerClass;
/*
 * Class:	sun/misc/CVM
 * Method:	isCompilerSupported
 * Signature:	()Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_isCompilerSupported;
/*
 * Class:	sun/misc/CVM
 * Method:	dumpCompilerProfileData
 * Signature:	()V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_dumpCompilerProfileData;
/*
 * Class:	sun/misc/CVM
 * Method:	dumpStats
 * Signature:	()V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_dumpStats;
/*
 * Class:	sun/misc/CVM
 * Method:	markCodeBuffer
 * Signature:	()V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_markCodeBuffer;
/*
 * Class:	sun/misc/CVM
 * Method:	initializeJITPolicy
 * Signature:	()V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_initializeJITPolicy;
/*
 * Class:	sun/misc/CVM
 * Method:	initializeAOTCode
 * Signature:	()Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_initializeAOTCode;
/*
 * Class:	sun/misc/CVM
 * Method:	parseVerifyOptions
 * Signature:	(Ljava/lang/String;)Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_parseVerifyOptions;
/*
 * Class:	sun/misc/CVM
 * Method:	parseSplitVerifyOptions
 * Signature:	(Ljava/lang/String;)Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_parseSplitVerifyOptions;
/*
 * Class:	sun/misc/CVM
 * Method:	parseXoptOptions
 * Signature:	(Ljava/lang/String;)Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_parseXoptOptions;
/*
 * Class:	sun/misc/CVM
 * Method:	parseXgcOptions
 * Signature:	(Ljava/lang/String;)Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_parseXgcOptions;
/*
 * Class:	sun/misc/CVM
 * Method:	parseXssOption
 * Signature:	(Ljava/lang/String;)Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_parseXssOption;
/*
 * Class:	sun/misc/CVM
 * Method:	parseAssertionOptions
 * Signature:	(Ljava/lang/String;)Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_parseAssertionOptions;
/*
 * Class:	sun/misc/CVM
 * Method:	agentlibSupported
 * Signature:	()Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_agentlibSupported;
/*
 * Class:	sun/misc/CVM
 * Method:	agentlibInitialize
 * Signature:	(I)Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_agentlibInitialize;
/*
 * Class:	sun/misc/CVM
 * Method:	agentlibProcess
 * Signature:	(Ljava/lang/String;)Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_agentlibProcess;
/*
 * Class:	sun/misc/CVM
 * Method:	xrunSupported
 * Signature:	()Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_xrunSupported;
/*
 * Class:	sun/misc/CVM
 * Method:	xrunInitialize
 * Signature:	(I)Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_xrunInitialize;
/*
 * Class:	sun/misc/CVM
 * Method:	xrunProcess
 * Signature:	(Ljava/lang/String;)Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_xrunProcess;
/*
 * Class:	sun/misc/CVM
 * Method:	xdebugSet
 * Signature:	()Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_xdebugSet;
/*
 * Class:	sun/misc/CVM
 * Method:	simpleLockGrab
 * Signature:	(Ljava/lang/Object;)Z
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_simpleLockGrab;
/*
 * Class:	sun/misc/CVM
 * Method:	simpleLockRelease
 * Signature:	(Ljava/lang/Object;)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_simpleLockRelease;
/*
 * Class:	sun/misc/CVM
 * Method:	getBuildOptionString
 * Signature:	(Ljava/lang/Object;)Ljava/lang/String;
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_getBuildOptionString;
/*
 * Class:	sun/misc/CVM
 * Method:	nanoTime
 * Signature:	()J
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_nanoTime;
/*
 * Class:	sun/misc/CVM
 * Method:	setURLConnectionDefaultUseCaches
 * Signature:	(Z)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_setURLConnectionDefaultUseCaches;
/*
 * Class:	sun/misc/CVM
 * Method:	clearURLClassLoaderUcpField
 * Signature:	(Ljava/net/URLClassLoader;)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_clearURLClassLoaderUcpField;
/*
 * Class:	sun/misc/CVM
 * Method:	getExceptionBackTrace
 * Signature:	(Ljava/lang/Throwable;)[Ljava/lang/Object;
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_getExceptionBackTrace;
/*
 * Class:	sun/misc/CVM
 * Method:	setSaveThreadStarterClassFlag
 * Signature:	(Ljava/lang/ThreadGroup;Z)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_setSaveThreadStarterClassFlag;
/*
 * Class:	sun/misc/CVM
 * Method:	getThreadStarterClass
 * Signature:	(Ljava/lang/Thread;)Ljava/lang/Class;
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_getThreadStarterClass;
/*
 * Class:	sun/misc/CVM
 * Method:	gc
 * Signature:	()V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_gc;
/*
 * Class:	sun/misc/CVM
 * Method:	setNoVerification
 * Signature:	(Ljava/lang/ClassLoader;Z)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_setNoVerification;
/*
 * Class:	sun/misc/CVM
 * Method:	nullifyRefsToDeadApp0
 * Signature:	(Ljava/lang/ClassLoader;)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_nullifyRefsToDeadApp0;
/*
 * Class:	sun/misc/CVM
 * Method:	ignoreInterruptedException
 * Signature:	(Ljava/lang/Thread;)V
 */
CNIEXPORT CNINativeMethod CNIsun_misc_CVM_ignoreInterruptedException;
#ifdef __cplusplus
}
#endif
#endif
