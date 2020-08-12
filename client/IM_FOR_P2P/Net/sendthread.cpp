#include "sendthread.h"
#include <QDebug>
#include "ChatMsg.pb.h"

SendThread::SendThread()
{

}

SendThread::SendThread(std::queue<const char*> *sendQueue,
                       std::map<int,char*> *sendMap,
                       std::map<int,NetworkAddr> *netInfo,
                       std::map<int,clock_t> *time,
                       QUdpSocket *udpSocket):
    m_toStop(false),
    m_sendQueue(sendQueue),   //待发送消息队列
    m_sendMap(sendMap),       //使用msgID为key,消息为value,超时重发
    m_netInfo(netInfo),        //每个接收端ID对应的IP、Port信息
    m_time(time),
    m_udpSocket(udpSocket)
{

}

void SendThread::run()
{
    /*做一下几件事：
     * 1)m_sendQueue消息出队，根据接收者ID发送消息
     * 2)将发送时间根据msgID插入m_time
     *
     *
     *
     */
    while(!m_toStop)
    {
        //do
        if(m_sendQueue->empty())
        {
            //QThread::msleep(500);   //500ms
            continue;
        }
        const char *msg=m_sendQueue->front();
        //格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容
        int recvID=-1;
        int msgID=-1;
        int msgType=-1;
        sscanf(msg,"%d\n%*d\n%d\n%d\n",&recvID,&msgID,&msgType);


        NetworkAddr recvAddr ;
        try {
            recvAddr=m_netInfo->at(recvID);  //根据接收者ID，发送给对应的对象
        } catch (std::out_of_range e) {
                                             //recvID不存在
            recvAddr=m_netInfo->at(0);       //发送给服务器
        }
        //qDebug()<<sizeof(*msg)<<"strlen："<<strlen(msg);
        m_udpSocket->writeDatagram(msg,strlen(msg),recvAddr.ip,recvAddr.port);
        m_sendQueue->pop();                  //从待发队列出队

        //开始计时，超时启动重发机制，我使用的是记录当前发送时间，重发线程获取其当前时间，与sendtime做差
        if(msgType==MsgType::ACK)            //应答消息不重发，不添加计时器
            continue;
        clock_t sendtime=clock();
        m_time->insert(std::pair<int,clock_t>(msgID,sendtime));


    }
}
inline void SendThread::stop()
{
    m_toStop=true;
}
