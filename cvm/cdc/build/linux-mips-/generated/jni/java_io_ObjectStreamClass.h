/* DO NOT EDIT THIS FILE - it is machine generated */
#include "javavm/export/jni.h"
/* Header for class java/io/ObjectStreamClass */

#ifndef _CVM_JNI_java_io_ObjectStreamClass
#define _CVM_JNI_java_io_ObjectStreamClass
#undef java_io_ObjectStreamClass_serialVersionUID
#define java_io_ObjectStreamClass_serialVersionUID -6120832682080437368LL
#ifdef __cplusplus
extern "C"{
#endif
/*
 * Class:	java/io/ObjectStreamClass
 * Method:	initNative
 * Signature:	()V
 */
JNIEXPORT void JNICALL Java_java_io_ObjectStreamClass_initNative
  (JNIEnv *, jclass);

/*
 * Class:	java/io/ObjectStreamClass
 * Method:	getFieldIDs
 * Signature:	([Ljava/io/ObjectStreamField;[J[J)V
 */
JNIEXPORT void JNICALL Java_java_io_ObjectStreamClass_getFieldIDs
  (JNIEnv *, jclass, jobjectArray, jlongArray, jlongArray);

/*
 * Class:	java/io/ObjectStreamClass
 * Method:	hasStaticInitializer
 * Signature:	(Ljava/lang/Class;)Z
 */
JNIEXPORT jboolean JNICALL Java_java_io_ObjectStreamClass_hasStaticInitializer
  (JNIEnv *, jclass, jclass);

#ifdef __cplusplus
}
#endif
#endif
