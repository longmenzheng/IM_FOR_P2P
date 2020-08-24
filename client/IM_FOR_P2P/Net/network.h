#ifndef NETWORK_H
#define NETWORK_H
#include <ctime>
#include <queue>
#include <list>
#include <map>
#include <QUdpSocket>
#include "netobserver.h"
#include "sendthread.h"
#include "recvthread.h"
#include "distributethread.h"
#include "buildp2p.h"
#include <QDebug>
#include <QTimer>

class SendThread;
class RecvThread;
class DistributeThread;
class BuildP2P;


enum MsgType
{
    CONNECT=0,
    BUILDP2P=1,
    SIGNIN=2,
    SIGNUP=3,
    OFFLINEMSG=4,
    ADDFRIEND=5,
    DELFRIEND=6,
    SEARCHFREIND=7,
    MODIFYFRIEND=8,
    ADDGROUP=9,
    DELGROUP=10,
    SEARCHGROUP=11,
    MODIFYGROUP=12,
    MODIFYUAERINFO=13,
    SYSTEMMSG=14,
    CHAT=15,
    AGREEADDFRIEND=16,
    AGREEADDGROUP=17,
    ACK=18,
    LOADFRIENDINFO=19
};


class NetworkAddr{
public:
    QHostAddress ip;
    quint16 port;
};



class Network:public QObject
{
private:
    std::queue<const char*> *m_sendQueue;        //待发送队列
    std::map<int,char*> *m_sendMap;              //全部发送消息队列，当确认收到后，delete
    std::queue<const char*> *m_recvQueue;        //消息接收队列
    std::list<NetObserver*> *m_observers;        //观察者列表
    std::map<int,NetworkAddr> *m_netInfo;       //每个通信对象的网络信息
    std::map<int,clock_t> *m_time;               //记录超时
    static Network* m_instance;
    static int NetMsgID;
    QTimer *m_timeout;
    QUdpSocket *m_udpSocket;
    SendThread *pSendThread;
    RecvThread *pRecvThread;
    DistributeThread *pDistributeThread;
private:
    Network();
    Network(Network&);
    void keepConnectWithServer(); //每隔几秒向服务器发送一次心跳

public:
    template<class T>
    void addMsg(T& msg);
    //void addMsg(void *msg);
    //void addMsg(MsgType msgType,std::string &msg);
    friend class BuildP2P;
    void addObserver(NetObserver* netObserver);    //需要接收网络消息的对象，应该调用此函数订阅网络消息
    void eraseObserver(NetObserver* netObserver);  //取消订阅
    static Network* getInstance();   //调用这个函数获取实例
};

template<class T>
void Network::addMsg(T& msg)
{
    int recvID = msg.recvid();        //获取接收者ID，根据其选择在m_netInfo中选择IP:post 发送消息
    //qDebug()<<"recvID:"<<recvID;
    int msgType=msg.networktype();    //获取消息类型，加在报文头部，接收端根据其确定解析类型
    int sendID=msg.sendid();          //发送者ID，加在报文头部，便于快速确认消息，同时更新m_netInfo
    int msgID= NetMsgID++;           //消息ID，加在报文头部，用于确认消息(ACK)
    qDebug()<<"____________________"<<sendID<<"____________";
    if(MsgType::ACK==msgType)
        msgID=msg.msgid();          //ACK的消息ID即为确认消息的ID
    else
        msg.set_msgid(msgID);
    size_t msgLen=msg.ByteSizeLong();   //获取消息字节长度


    char msgBytes[msgLen+1];
    msgBytes[msgLen]=0;  //将最后一个字节置零
    msg.SerializeToArray(msgBytes,msgLen);  //序列化到msgBytes中
    char *queueElement=(char *)malloc(sizeof(int)*5+6+msgLen);//发送队列元素
    //memset(queueElement,0,sizeof(*queueElement));

    /*格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容
     *为什么用这种格式，因为对端接收到消息做下面几件事：
     *              1)立马回一个ACK
     *              2)更新接收者与网络映射map
     *              3)根据消息类型，解析消息
     */

    sprintf(queueElement,"%d\n%d\n%d\n%d\n%d\n%s\n",recvID,sendID,msgID,msgType,msgLen,msgBytes);

    qDebug()<<queueElement;

    m_sendQueue->push(queueElement);       //放入待发队列当中
    if(msgType==MsgType::ACK)              //ACK消息不需要重发，不插入m_sendMap中
        return;
    m_sendMap->insert(std::pair<int,char*>(msgID,queueElement));  //插入未确认表
}

#endif // NETWORK_H
