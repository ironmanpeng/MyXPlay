//
// Created by pengt on 2018/10/25.
//

#ifndef MYXPLAY_IRESAMPLE_H
#define MYXPLAY_IRESAMPLE_H


#include "IObserver.h"
#include "XParameter.h"

class IResample: public IObserver {
public:
    virtual bool Open(XParameter in,XParameter out = XParameter()) = 0;
    virtual XData Resample(XData indata) = 0;
    virtual void Update(XData data);
    int outChannels = 2;
    int outFormat = 1;
};


#endif //MYXPLAY_IRESAMPLE_H
