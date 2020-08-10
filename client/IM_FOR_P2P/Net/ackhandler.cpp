#include "ackhandler.h"
#include "network.h"
#include <exception>
#include <QDebug>

ACKHandler::ACKHandler()
{

}


ACKHandler::ACKHandler(std::map<int,char*> *sendMap,
           std::map<int,clock_t> *time):
    m_sendMap(sendMap),
    m_time(time)
{
  qDebug()<<"-------------------ACKhandler---------------------";
}

void ACKHandler::recvMsg(const char *msg)
{
    /*拿到消息后做下面的事:
     *      其实就一件事，让已接收的消息不再需要重发
     *              1)delete m_sendMap中对应的消息
     *              2)delete m_time中对应的计时器
     */
    int msgType=-1;
    int msgID=-1;
    //qDebug()<<"-------------------ACKhandler---------------------";
    //格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容
    sscanf(msg,"%*d\n%*d\n%d\n%d\n",&msgID,&msgType);  //获取消息ID 消息类型
    if(msgType==MsgType::ACK)
    {
        if(m_sendMap->count(msgID))
        {
            char *tmp = m_sendMap->at(msgID);
            m_sendMap->erase(msgID);          //从map中移除
            delete tmp;                       //delete移除的元素
        }

        if(m_time->count(msgID))
        {
            m_time->erase(msgID);             //移除计时器
        }

    }
}
