//
// Created by pengt on 2018/10/24.
//

#ifndef MYXPLAY_XTEXTURE_H
#define MYXPLAY_XTEXTURE_H
enum XTextureType{
    XTEXTURE_YUV420P = 0,   //Y 4 u 1 v 1
    XTEXTURE_NV12 = 25,     //Y 4 uv1
    XTEXTURE_NV21 = 26      //Y 4 vu1
};

class XTexture {
public:
    static XTexture *Create();
    virtual bool Init(void *win,XTextureType type=XTEXTURE_YUV420P) = 0;
    virtual void Draw(unsigned char *data[],int width,int height) = 0;
};


#endif //MYXPLAY_XTEXTURE_H
