//
// Created by pengt on 2018/10/25.
//

#ifndef MYXPLAY_FFRESAMPLE_H
#define MYXPLAY_FFRESAMPLE_H


#include "IResample.h"
struct SwrContext;
class FFResample: public IResample {
public:
    virtual bool Open(XParameter in,XParameter out=XParameter());
    virtual XData Resample(XData indata);

protected:
    SwrContext *actx = 0;
};


#endif //MYXPLAY_FFRESAMPLE_H
