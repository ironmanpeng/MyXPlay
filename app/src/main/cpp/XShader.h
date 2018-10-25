//
// Created by pengt on 2018/10/24.
//

#ifndef MYXPLAY_XSHADER_H
#define MYXPLAY_XSHADER_H


class XShader {
public:
    virtual bool Init();

    //获取材质并映射到内存
    virtual void GetTexture(unsigned int index,int width,int height, unsigned char *buf);
    virtual void Draw();

protected:
    unsigned int vsh = 0;
    unsigned int fsh = 0;
    unsigned int program = 0;
    unsigned int texts[100] = {0};
};


#endif //MYXPLAY_XSHADER_H
