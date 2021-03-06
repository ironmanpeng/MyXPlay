//
// Created by pengt on 2018/10/17.
//

#ifndef MYXPLAY_XTHREAD_H
#define MYXPLAY_XTHREAD_H

//sleep 毫秒
void XSleep(int mis);

//c++ 11 线程库
class XThread{
public:
    //启动线程
    virtual void Start();

    //通过控制isExit安全停止线程（不一定成功）
    virtual void Stop();

    //入口主函数
    virtual void Main(){}

protected:
    bool isExit = false;
    bool isRuning = false;
private:
    void ThreadMain();
};
#endif //MYXPLAY_XTHREAD_H
