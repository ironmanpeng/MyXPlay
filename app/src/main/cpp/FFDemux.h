//
// Created by pengt on 2018/10/17.
//

#ifndef MYXPLAY_FFDEMUX_H
#define MYXPLAY_FFDEMUX_H

#include "IDemux.h"

struct AVFormatContext;

class FFDemux : public IDemux{
public:

    //打开文件，或者流媒体 rtmp http rtsp
    virtual bool Open(const char *url);

    //读取一帧数据，数据由调用者清理
    virtual XData Read();

    FFDemux();

private:
    AVFormatContext *ic = 0;
};

#endif //MYXPLAY_FFDEMUX_H
