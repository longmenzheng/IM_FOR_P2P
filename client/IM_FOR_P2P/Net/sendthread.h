#ifndef SENDTHREAD_H
#define SENDTHREAD_H
#include <QThread>
#include "network.h"

class NetworkAddr;

class SendThread:public QThread
{
protected:
    volatile bool m_toStop;
private:
    std::queue<const char*> *m_sendQueue;        //待发送队列
    std::map<int,char*> *m_sendMap;              //全部发送消息队列，当确认收到后，delete
    std::map<int,NetworkAddr> *m_netInfo;       //每个通信对象的网络信息
    std::map<int,clock_t> *m_time;               //
    QUdpSocket *m_udpSocket;

public:
    SendThread();
    SendThread(std::queue<const char*> *sendQueue,
               std::map<int,char*> *sendMap,
               std::map<int,NetworkAddr> *netInfo,
               std::map<int,clock_t> *time,
               QUdpSocket *udpSocket);
    void run() override;
    void stop();
};

#endif // SENDTHREAD_H
