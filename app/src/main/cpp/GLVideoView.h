//
// Created by pengt on 2018/10/24.
//

#ifndef MYXPLAY_GLVIDEOVIEW_H
#define MYXPLAY_GLVIDEOVIEW_H


#include "XData.h"
#include "IVideoView.h"

class XTexture;
class GLVideoView :public IVideoView{
public:
    virtual void SetRender(void *win);
    virtual void Render(XData data);

protected:
    void *view = 0;
    XTexture *txt = 0;
};


#endif //MYXPLAY_GLVIDEOVIEW_H
