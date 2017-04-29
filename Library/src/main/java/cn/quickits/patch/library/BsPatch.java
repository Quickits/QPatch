package cn.quickits.patch.library;

/**
 * Created by gavin on 2017/4/26.
 */

class BsPatch {

    static {
        System.loadLibrary("qpatch");
    }

    public static native void bspatch(String oldFile, String newFile, String patchFile);
}
