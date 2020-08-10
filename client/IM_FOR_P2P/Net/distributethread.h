#ifndef DISTRIBUTETHREAD_H
#define DISTRIBUTETHREAD_H
#include <QThread>
#include "network.h"

class DistributeThread:public QThread
{
protected:
    volatile bool m_toStop;
private:
    std::queue<const char*> *m_recvQueue;        //消息接收队列
    std::list<NetObserver*> *m_observers;        //观察者列表
    //QUdpSocket *m_udpSocket;
public:
    DistributeThread();
    DistributeThread(std::queue<const char*> *recvQueue,
                     std::list<NetObserver*> *observers);
    void run() override;
    void stop(){
        m_toStop=true;
    }
};

#endif // DISTRIBUTETHREAD_H
