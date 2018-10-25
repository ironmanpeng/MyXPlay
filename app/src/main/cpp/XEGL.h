//
// Created by pengt on 2018/10/24.
//

#ifndef MYXPLAY_XEGL_H
#define MYXPLAY_XEGL_H


class XEGL {
public:
    virtual bool Init(void *win) = 0;
    virtual void Draw() = 0;
    static XEGL *Get();

protected:
    XEGL(){}
};


#endif //MYXPLAY_XEGL_H
