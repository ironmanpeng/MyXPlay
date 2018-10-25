//
// Created by pengt on 2018/10/24.
//

#ifndef MYXPLAY_IVIDEOVIEW_H
#define MYXPLAY_IVIDEOVIEW_H


#include "XData.h"
#include "IObserver.h"

class IVideoView :public IObserver{
public:
    virtual void SetRender(void *win) = 0;
    virtual void Render(XData data) = 0;
    virtual void Update(XData data);
};


#endif //MYXPLAY_IVIDEOVIEW_H
