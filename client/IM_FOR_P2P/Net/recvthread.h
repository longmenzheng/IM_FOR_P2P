#ifndef RECVTHREAD_H
#define RECVTHREAD_H
#include <QThread>
#include <queue>
#include <QUdpSocket>

class RecvThread:public QThread
{
protected:
    volatile bool m_toStop;
private:
    std::queue<const char*> *m_recvQueue;        //消息接收队列
    QUdpSocket *m_udpSocket;
public:
    RecvThread();
    RecvThread(std::queue<const char*> *recvQueue,QUdpSocket *udpSocket);
    void run() override;
    void doWork();
    void stop(){
        m_toStop=true;
    }

};

#endif // RECVTHREAD_H
