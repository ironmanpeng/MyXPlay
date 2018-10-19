//
// Created by pengt on 2018/10/17.
//

#ifndef MYXPLAY_IDEMUX_H
#define MYXPLAY_IDEMUX_H

#include "XData.h"
#include "XThread.h"
#include "IObserver.h"

//解封装接口
class IDemux : public IObserver {
public:
    //打开文件，或者流媒体 rtmp http rtsp
    virtual bool Open(const char *url) = 0;

    //读取一帧数据，数据有调用者清理
    virtual XData Read() = 0;

    //总时长（毫秒)
    int totalMs = 0;

protected:
    virtual void Main();
};

#endif //MYXPLAY_IDEMUX_H
