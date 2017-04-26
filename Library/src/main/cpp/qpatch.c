
#include "cn_quickits_patch_library_BsPatch.h"

#include <android/log.h>

#include "bzip2/blocksort.c"
#include "bzip2/bzlib.c"
#include "bzip2/compress.c"
#include "bzip2/crctable.c"
#include "bzip2/decompress.c"
#include "bzip2/huffman.c"
#include "bzip2/randtable.c"

#include "bsdiff/bspatch.c"

#define LOG_TAG "QPatch"
#define LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)

JNIEXPORT void JNICALL Java_cn_quickits_patch_library_BsPatch_bspatch
        (JNIEnv *env, jclass clz, jstring oldFile, jstring newFile, jstring patchFile) {
    int argc = 4;

    char *oldfile = (char *) (*env)->GetStringUTFChars(env, oldFile, NULL);
    char *newfile = (char *) (*env)->GetStringUTFChars(env, newFile, NULL);
    char *patchfile = (char *) (*env)->GetStringUTFChars(env, patchFile, NULL);

    char *argv[4];
    argv[0] = "bspatch";
    argv[1] = oldfile;
    argv[2] = newfile;
    argv[3] = patchfile;

    bspatch_main(argc, argv);

    (*env)->ReleaseStringUTFChars(env, oldFile, oldfile);
    (*env)->ReleaseStringUTFChars(env, newFile, newfile);
    (*env)->ReleaseStringUTFChars(env, patchFile, patchfile);

    LOGD("%s", "lala");
}
