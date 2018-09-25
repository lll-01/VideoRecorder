/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_erlei_gdx_utils_BufferUtils */

#ifndef _Included_com_erlei_gdx_utils_BufferUtils
#define _Included_com_erlei_gdx_utils_BufferUtils
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    freeMemory
 * Signature: (Ljava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_freeMemory
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    newDisposableByteBuffer
 * Signature: (I)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_com_erlei_gdx_utils_BufferUtils_newDisposableByteBuffer
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    getBufferAddress
 * Signature: (Ljava/nio/Buffer;)J
 */
JNIEXPORT jlong JNICALL Java_com_erlei_gdx_utils_BufferUtils_getBufferAddress
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    clear
 * Signature: (Ljava/nio/ByteBuffer;I)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_clear
  (JNIEnv *, jclass, jobject, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    copyJni
 * Signature: ([FLjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_copyJni___3FLjava_nio_Buffer_2II
  (JNIEnv *, jclass, jfloatArray, jobject, jint, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    copyJni
 * Signature: ([BILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_copyJni___3BILjava_nio_Buffer_2II
  (JNIEnv *, jclass, jbyteArray, jint, jobject, jint, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    copyJni
 * Signature: ([CILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_copyJni___3CILjava_nio_Buffer_2II
  (JNIEnv *, jclass, jcharArray, jint, jobject, jint, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    copyJni
 * Signature: ([SILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_copyJni___3SILjava_nio_Buffer_2II
  (JNIEnv *, jclass, jshortArray, jint, jobject, jint, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    copyJni
 * Signature: ([IILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_copyJni___3IILjava_nio_Buffer_2II
  (JNIEnv *, jclass, jintArray, jint, jobject, jint, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    copyJni
 * Signature: ([JILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_copyJni___3JILjava_nio_Buffer_2II
  (JNIEnv *, jclass, jlongArray, jint, jobject, jint, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    copyJni
 * Signature: ([FILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_copyJni___3FILjava_nio_Buffer_2II
  (JNIEnv *, jclass, jfloatArray, jint, jobject, jint, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    copyJni
 * Signature: ([DILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_copyJni___3DILjava_nio_Buffer_2II
  (JNIEnv *, jclass, jdoubleArray, jint, jobject, jint, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    copyJni
 * Signature: (Ljava/nio/Buffer;ILjava/nio/Buffer;II)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_copyJni__Ljava_nio_Buffer_2ILjava_nio_Buffer_2II
  (JNIEnv *, jclass, jobject, jint, jobject, jint, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    transformV4M4Jni
 * Signature: (Ljava/nio/Buffer;II[FI)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_transformV4M4Jni__Ljava_nio_Buffer_2II_3FI
  (JNIEnv *, jclass, jobject, jint, jint, jfloatArray, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    transformV4M4Jni
 * Signature: ([FII[FI)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_transformV4M4Jni___3FII_3FI
  (JNIEnv *, jclass, jfloatArray, jint, jint, jfloatArray, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    transformV3M4Jni
 * Signature: (Ljava/nio/Buffer;II[FI)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_transformV3M4Jni__Ljava_nio_Buffer_2II_3FI
  (JNIEnv *, jclass, jobject, jint, jint, jfloatArray, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    transformV3M4Jni
 * Signature: ([FII[FI)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_transformV3M4Jni___3FII_3FI
  (JNIEnv *, jclass, jfloatArray, jint, jint, jfloatArray, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    transformV2M4Jni
 * Signature: (Ljava/nio/Buffer;II[FI)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_transformV2M4Jni__Ljava_nio_Buffer_2II_3FI
  (JNIEnv *, jclass, jobject, jint, jint, jfloatArray, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    transformV2M4Jni
 * Signature: ([FII[FI)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_transformV2M4Jni___3FII_3FI
  (JNIEnv *, jclass, jfloatArray, jint, jint, jfloatArray, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    transformV3M3Jni
 * Signature: (Ljava/nio/Buffer;II[FI)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_transformV3M3Jni__Ljava_nio_Buffer_2II_3FI
  (JNIEnv *, jclass, jobject, jint, jint, jfloatArray, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    transformV3M3Jni
 * Signature: ([FII[FI)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_transformV3M3Jni___3FII_3FI
  (JNIEnv *, jclass, jfloatArray, jint, jint, jfloatArray, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    transformV2M3Jni
 * Signature: (Ljava/nio/Buffer;II[FI)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_transformV2M3Jni__Ljava_nio_Buffer_2II_3FI
  (JNIEnv *, jclass, jobject, jint, jint, jfloatArray, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    transformV2M3Jni
 * Signature: ([FII[FI)V
 */
JNIEXPORT void JNICALL Java_com_erlei_gdx_utils_BufferUtils_transformV2M3Jni___3FII_3FI
  (JNIEnv *, jclass, jfloatArray, jint, jint, jfloatArray, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    find
 * Signature: (Ljava/nio/Buffer;IILjava/nio/Buffer;II)J
 */
JNIEXPORT jlong JNICALL Java_com_erlei_gdx_utils_BufferUtils_find__Ljava_nio_Buffer_2IILjava_nio_Buffer_2II
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    find
 * Signature: ([FIILjava/nio/Buffer;II)J
 */
JNIEXPORT jlong JNICALL Java_com_erlei_gdx_utils_BufferUtils_find___3FIILjava_nio_Buffer_2II
  (JNIEnv *, jclass, jfloatArray, jint, jint, jobject, jint, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    find
 * Signature: (Ljava/nio/Buffer;II[FII)J
 */
JNIEXPORT jlong JNICALL Java_com_erlei_gdx_utils_BufferUtils_find__Ljava_nio_Buffer_2II_3FII
  (JNIEnv *, jclass, jobject, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    find
 * Signature: ([FII[FII)J
 */
JNIEXPORT jlong JNICALL Java_com_erlei_gdx_utils_BufferUtils_find___3FII_3FII
  (JNIEnv *, jclass, jfloatArray, jint, jint, jfloatArray, jint, jint);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    find
 * Signature: (Ljava/nio/Buffer;IILjava/nio/Buffer;IIF)J
 */
JNIEXPORT jlong JNICALL Java_com_erlei_gdx_utils_BufferUtils_find__Ljava_nio_Buffer_2IILjava_nio_Buffer_2IIF
  (JNIEnv *, jclass, jobject, jint, jint, jobject, jint, jint, jfloat);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    find
 * Signature: ([FIILjava/nio/Buffer;IIF)J
 */
JNIEXPORT jlong JNICALL Java_com_erlei_gdx_utils_BufferUtils_find___3FIILjava_nio_Buffer_2IIF
  (JNIEnv *, jclass, jfloatArray, jint, jint, jobject, jint, jint, jfloat);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    find
 * Signature: (Ljava/nio/Buffer;II[FIIF)J
 */
JNIEXPORT jlong JNICALL Java_com_erlei_gdx_utils_BufferUtils_find__Ljava_nio_Buffer_2II_3FIIF
  (JNIEnv *, jclass, jobject, jint, jint, jfloatArray, jint, jint, jfloat);

/*
 * Class:     com_erlei_gdx_utils_BufferUtils
 * Method:    find
 * Signature: ([FII[FIIF)J
 */
JNIEXPORT jlong JNICALL Java_com_erlei_gdx_utils_BufferUtils_find___3FII_3FIIF
  (JNIEnv *, jclass, jfloatArray, jint, jint, jfloatArray, jint, jint, jfloat);

#ifdef __cplusplus
}
#endif
#endif