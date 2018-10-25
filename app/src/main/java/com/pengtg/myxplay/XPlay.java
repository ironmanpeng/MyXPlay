package com.pengtg.myxplay;

import android.content.Context;
import android.opengl.GLSurfaceView;
import android.util.AttributeSet;
import android.view.SurfaceHolder;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;


public class XPlay extends GLSurfaceView implements SurfaceHolder.Callback,GLSurfaceView.Renderer {
    public XPlay(Context context, AttributeSet attrs) {
        super(context, attrs);

        setRenderer(this);
    }

    @Override
    public void surfaceCreated(SurfaceHolder holder) {

        //初始化OpenGL egl显示
        InitView(holder.getSurface());
    }

    @Override
    public void surfaceDestroyed(SurfaceHolder holder) {

    }

    @Override
    public void surfaceChanged(SurfaceHolder holder, int format, int w, int h) {

    }

    @Override
    public void onSurfaceCreated(GL10 gl, EGLConfig config) {

    }

    @Override
    public void onSurfaceChanged(GL10 gl, int width, int height) {

    }

    @Override
    public void onDrawFrame(GL10 gl) {

    }

    public native void InitView(Object surface);
}
