package cn.quickits.patch;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.view.View;

import cn.quickits.patch.library.QPatch;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }

    public void patch(View view) {
        new Thread(new Runnable() {
            @Override
            public void run() {
                QPatch.patch("/sdcard/1.png", "/sdcard/2.png", "/sdcard/1-2.p");
            }
        }).start();
    }

}
