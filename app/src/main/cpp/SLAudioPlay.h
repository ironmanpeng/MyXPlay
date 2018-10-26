//
// Created by pengt on 2018/10/26.
//

#ifndef MYXPLAY_SLAUDIOPLAY_H
#define MYXPLAY_SLAUDIOPLAY_H


#include "IAudioPlay.h"

class SLAudioPlay : public IAudioPlay{
public:
    virtual bool StartPlay(XParameter out);
    void PlayCall(void *bufq);

    SLAudioPlay();
    virtual ~SLAudioPlay();

protected:
    unsigned char *buf = 0;
};


#endif //MYXPLAY_SLAUDIOPLAY_H
