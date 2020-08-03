#include "sendthread.h"
#include <QDebug>
#include "ChatMsg.pb.h"

SendThread::SendThread()
{

}

SendThread::SendThread(std::queue<const char*> *sendQueue,
                       std::map<int,char*> *sendMap,
                       std::map<int,NetworkAddr*> *netInfo,
                       QUdpSocket *udpSocket):
    m_toStop(false),
    m_sendQueue(sendQueue),   //待发送消息队列
    m_sendMap(sendMap),       //使用msgID为key,消息为value,超时重发
    m_netInfo(netInfo),        //每个接收端ID对应的IP、Port信息
    m_udpSocket(udpSocket)
{

}

void SendThread::run()
{
    while(!m_toStop)
    {
        //do
        if(m_sendQueue->empty())
            continue;
        const char *msg=m_sendQueue->front();
        int recvID=-1;
        sscanf(msg,"%d\n",&recvID);

        //test
        /*
        qDebug()<<"接收到ID"<<recvID;
        int msgType;
        sscanf(msg,"%*d\n%d\n",&msgType);
        qDebug()<<"接收到消息类型："<<msgType;
        if(msgType==MsgType::CHAT)
        {
            char tmp[1024]={0};
            sscanf(msg,"%*d\n%*d\n%s\n",tmp);
            qDebug()<<"发送队列:"<<msg;
            qDebug()<<tmp;
            IM::ChatMsg chatMsg;
            chatMsg.ParseFromArray((void*)tmp,strlen(tmp));
            QString str=QString::fromStdString(chatMsg.content());
            str.replace(QString("\a"),QString(" "));
            qDebug()<<str;
            //ui->input->setText(str);
        }
        */



        NetworkAddr *recvAddr =nullptr;
        try {
            recvAddr=m_netInfo->at(recvID);
        } catch (std::out_of_range e) {
            //recvID不存在
            recvAddr=m_netInfo->at(0);  //发送给服务器
        }
        qDebug()<<sizeof(*msg)<<"strlen："<<strlen(msg);
        m_udpSocket->writeDatagram(msg,strlen(msg),QHostAddress(QString(recvAddr->ip.c_str())),
                                   quint16(recvAddr->port));
        m_sendQueue->pop();

    }
}
inline void SendThread::stop()
{
    m_toStop=true;
}
