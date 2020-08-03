#include "recvthread.h"
#include <QDebug>

RecvThread::RecvThread()
{

}

RecvThread::RecvThread(std::queue<const char*> *recvQueue,QUdpSocket *udpSocket):
    m_toStop(false),
    m_recvQueue(recvQueue),
    m_udpSocket(udpSocket)
{

}
void RecvThread::run(){

    qDebug()<<"线程已经执行";
    //connect(m_udpSocket,&QUdpSocket::readyRead,this,&RecvThread::doWork);
    //connect(m_udpSocket, SIGNAL(readyRead()),this, SLOT(doWork()));
    //sleep(3);
    while(1)
    {
        if(!m_udpSocket->hasPendingDatagrams())
            continue;
        qDebug()<<"dowork";
        QHostAddress sendIP;
        quint16 sendPort;
        char recvData[1024]={0};
        int dataLen=m_udpSocket->readDatagram(recvData,m_udpSocket->pendingDatagramSize(),&sendIP,&sendPort);
        qDebug()<<sendIP.toString()<<":"<<sendPort<<"   "<<recvData<<"收到";
        if(dataLen>0)
        {
            char *data=(char*)malloc(dataLen+1);
            memcpy(data,recvData,dataLen+1);
            m_recvQueue->push(data);    //将数据压入接收队列中
            //qDebug()<<data<<"什么情况";
        }
    }
    doWork();
    while(1);
}

void RecvThread::doWork()
{
    qDebug()<<"dowork";
    QHostAddress sendIP;
    quint16 sendPort;
    char recvData[1024]={0};
    int dataLen=m_udpSocket->readDatagram(recvData,sizeof(recvData),&sendIP,&sendPort);
    qDebug()<<sendIP.toString()<<":"<<sendPort<<"   "<<recvData<<"收到";
    if(dataLen>0)
    {
        qDebug()<<sendIP.toString()<<":"<<sendPort<<"   "<<recvData<<"收到";
        char *data=(char*)malloc(dataLen+1);
        memcpy(data,recvData,dataLen+1);
        m_recvQueue->push(data);    //将数据压入接收队列中
        qDebug()<<data<<"什么情况";
    }
}
