//
// Created by pengt on 2018/10/17.
//

#ifndef MYXPLAY_XLOG_H
#define MYXPLAY_XLOG_H

class XLog{

};

#ifdef ANDROID

#include <android/log.h>
#define XLOGD(...) __android_log_print(ANDROID_LOG_DEBUG,"MyXPlay",__VA_ARGS__)
#define XLOGI(...) __android_log_print(ANDROID_LOG_INFO,"MyXPlay",__VA_ARGS__)
#define XLOGE(...) __android_log_print(ANDROID_LOG_ERROR,"MyXPlay",__VA_ARGS__)
#else
#define XLOGD(...) printf("MyXPlay",__VA_ARGS__)
#define XLOGI(...) printf("MyXPlay",__VA_ARGS__)
#define XLOGE(...) printf("MyXPlay",__VA_ARGS__)
#endif

#endif //MYXPLAY_XLOG_H
