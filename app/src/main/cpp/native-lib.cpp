#include <jni.h>
#include <string>

#include "FFDemux.h"
#include "XLog.h"
#include "FFDecode.h"
#include "XEGL.h"
#include "XShader.h"
#include "IVideoView.h"
#include "GLVideoView.h"
#include "FFResample.h"
#include "SLAudioPlay.h"
#include <android/native_window_jni.h>

class TestObs : public IObserver{
public:
    void Update(XData d){
        //XLOGI("TestObs Update data size is %d",d.size);
    }
};

extern "C"
JNIEXPORT
jint JNI_OnLoad(JavaVM *vm,void *res){
    FFDecode::InitHard(vm);
    return JNI_VERSION_1_4;
}

IVideoView *view = NULL;

extern "C" JNIEXPORT jstring

JNICALL
Java_com_pengtg_myxplay_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";

//    IDemux *de = new FFDemux();
//    de->Open("/sdcard/1080.mp4");
//    de->Start();
//    XSleep(3000);
//    de->Stop();
    TestObs *tobs = new TestObs();
    IDemux *de = new FFDemux();
//    de->AddObs(tobs);
    de->Open("/sdcard/1080.mp4");

    IDecode *vdecode = new FFDecode();
    vdecode->Open(de->GetVPara());

    IDecode *adecode = new FFDecode();
    adecode->Open(de->GetAPara());
    de->AddObs(vdecode);
    de->AddObs(adecode);

    view = new GLVideoView();
    vdecode->AddObs(view);

    IResample *resample = new FFResample();
    XParameter outPara = de->GetAPara();

    resample->Open(de->GetAPara(),outPara);
    adecode->AddObs(resample);

    IAudioPlay *audioPlay = new SLAudioPlay();
    audioPlay->StartPlay(outPara);
    resample->AddObs(audioPlay);

    de->Start();
    vdecode->Start();
    adecode->Start();
//    XSleep(3000);
//    de->Stop();

    /*for(;;){
        XData d = de->Read();
        XLOGI("Read data size is %d",d.size);

    }*/
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT void JNICALL
Java_com_pengtg_myxplay_XPlay_InitView(JNIEnv *env, jobject instance, jobject surface){
    //
    ANativeWindow *win = ANativeWindow_fromSurface(env,surface);
    view->SetRender(win);
//    XEGL::Get()->Init(win);
//    XShader shader;
//    shader.Init();
}