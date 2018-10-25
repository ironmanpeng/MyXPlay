//
// Created by pengt on 2018/10/17.
//

#ifndef MYXPLAY_XDATA_H
#define MYXPLAY_XDATA_H

struct XData{
    unsigned char *data = 0;
    unsigned char *datas[8] = {0};
    int size = 0;
    bool isAudio = false;
    int width = 0;
    int height = 0;
    void Drop();
};

#endif //MYXPLAY_XDATA_H
