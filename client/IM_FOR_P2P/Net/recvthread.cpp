#include "recvthread.h"
#include <QDebug>
#include <ACK.pb.h>
#include <network.h>

RecvThread::RecvThread()
{

}

RecvThread::RecvThread(std::queue<const char*> *recvQueue,
                       std::map<int,NetworkAddr> *netInfo,
                       QUdpSocket *udpSocket):
    m_toStop(false),
    m_recvQueue(recvQueue),
    m_netInfo(netInfo),
    m_udpSocket(udpSocket)
{

}
void RecvThread::run(){
    //格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容

    qDebug()<<"线程已经执行";
    //connect(m_udpSocket,&QUdpSocket::readyRead,this,&RecvThread::doWork);
    //connect(m_udpSocket, SIGNAL(readyRead()),this, SLOT(doWork()));
    //sleep(3);
    char buf[1024]={0};
    while(!m_toStop)
    {
        if(!m_udpSocket->hasPendingDatagrams())
        {
            msleep(250);
            continue;
        }
        qDebug()<<"dowork";
        QHostAddress sendIP;
        quint16 sendPort;
        int recvlen=m_udpSocket->readDatagram(buf,m_udpSocket->pendingDatagramSize(),&sendIP,&sendPort);
        qDebug()<<sendIP.toString()<<":"<<sendPort<<"   "<<buf<<"收到";
        if(recvlen>0)
        {
            int msgType,msgID,sendID;
            sscanf(buf,"%*d\n%d\n%d\n%d\n",&sendID,&msgID,&msgType);

            //更新网络对应表信息
            (*m_netInfo)[sendID].ip=sendIP;
            (*m_netInfo)[sendID].port=sendPort;

            if(msgType!=MsgType::ACK)                   //如果不是ACK就回个ACK
            {
                IM::ACK ack;
                ack.set_msgid(msgID);
                ack.set_networktype(MsgType::ACK);
                ack.set_flag(true);
                Network::getInstance()->addMsg(ack);  //加入缓冲队列
            }
            char *msg=(char*)malloc(recvlen+1);  //将buf的消息存于tmp
            memset(msg,0,recvlen+1);
            memcpy(msg,buf,recvlen);             //拷贝所有收到的数据
            m_recvQueue->push(msg);    //将数据压入接收队列中
            //qDebug()<<data<<"什么情况";
        }
    }
}


