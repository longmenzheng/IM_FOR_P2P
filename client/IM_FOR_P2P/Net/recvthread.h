#ifndef RECVTHREAD_H
#define RECVTHREAD_H
#include <QThread>
#include <queue>
#include <QUdpSocket>
#include <network.h>

class NetworkAddr;

class RecvThread:public QThread
{
protected:
    volatile bool m_toStop;
private:
    std::queue<const char*> *m_recvQueue;        //消息接收队列
    std::map<int,NetworkAddr> *m_netInfo;       //每个通信对象的网络信息
    QUdpSocket *m_udpSocket;

public:
    RecvThread();
    RecvThread(std::queue<const char*> *recvQueue,
               std::map<int,NetworkAddr> *netInfo,
               QUdpSocket *udpSocket);
    void run() override;
    void stop(){
        m_toStop=true;
    }
signals:
    void ACK(int msgID);     //消息确认信号

};

#endif // RECVTHREAD_H
