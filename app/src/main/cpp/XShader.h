//
// Created by pengt on 2018/10/24.
//

#ifndef MYXPLAY_XSHADER_H
#define MYXPLAY_XSHADER_H


class XShader {
public:
    virtual bool Init();

protected:
    unsigned int vsh = 0;
    unsigned int fsh = 0;
    unsigned int program = 0;
};


#endif //MYXPLAY_XSHADER_H
