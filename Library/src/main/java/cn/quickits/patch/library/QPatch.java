package cn.quickits.patch.library;

/**
 * Created by gavin on 2017/4/26.
 */

public class QPatch {

    public static void patch(String oldFile, String newFile, String patchFile) {
        BsPatch.bspatch(oldFile, newFile, patchFile);
    }

}
