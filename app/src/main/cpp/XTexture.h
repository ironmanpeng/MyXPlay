//
// Created by pengt on 2018/10/24.
//

#ifndef MYXPLAY_XTEXTURE_H
#define MYXPLAY_XTEXTURE_H


class XTexture {
public:
    static XTexture *Create();
    virtual bool Init(void *win) = 0;
    virtual void Draw(unsigned char *data[],int width,int height) = 0;
};


#endif //MYXPLAY_XTEXTURE_H
