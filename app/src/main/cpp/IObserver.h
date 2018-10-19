//
// Created by pengt on 2018/10/18.
//
#ifndef MYXPLAY_IOBSERVER_H
#define MYXPLAY_IOBSERVER_H
using namespace std;
#include "XData.h"
#include "XThread.h"

#include <vector>
#include <mutex>

////观察者 和 主体
class IObserver : public XThread{
public:
    //观察者接收数据函数
    virtual void Update(XData data){}

    //主体函数 添加观察者(线程安全)
    void AddObs(IObserver *obs);

    //通知所有观察者(线程安全)
    void Notify(XData data);

protected:
    vector<IObserver *>obss;
    mutex mux;
};

#endif //MYXPLAY_IOBSERVER_H
