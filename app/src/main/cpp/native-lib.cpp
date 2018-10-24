#include <jni.h>
#include <string>

#include "FFDemux.h"
#include "XLog.h"
#include "FFDecode.h"

class TestObs : public IObserver{
public:
    void Update(XData d){
        //XLOGI("TestObs Update data size is %d",d.size);
    }
};

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
