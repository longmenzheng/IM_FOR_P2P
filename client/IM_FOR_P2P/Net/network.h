#ifndef NETWORK_H
#define NETWORK_H
#include <queue>
#include <list>
#include <map>
#include <QUdpSocket>
#include "netobserver.h"
#include "sendthread.h"
#include "recvthread.h"
#include "distributethread.h"
#include <QDebug>

class SendThread;
class RecvThread;
class DistributeThread;


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
    AGREEADDGROUP=17
};

struct NetworkAddr{
    std::string ip;
    int port;
};

class Network:public QObject
{
private:
    std::queue<const char*> *m_sendQueue;        //待发送队列
    std::map<int,char*> *m_sendMap;              //全部发送消息队列，当确认收到后，delete
    std::queue<const char*> *m_recvQueue;        //消息接收队列
    std::list<NetObserver*> *m_observers;        //观察者列表
    std::map<int,NetworkAddr*> *m_netInfo;        //每个通信对象的网络信息
    static Network* m_instance;
    QUdpSocket *m_udpSocket;
    SendThread *pSendThread;
    RecvThread *pRecvThread;
    DistributeThread *pDistributeThread;
private:
    Network();
    Network(Network&);
    //void sendToServer(const char *msg)const;
    //void sendToPeer(const int& peerID,const char *msg)const;
    //void sendMsg();
    //void recvMsg();
    //void distributeMsg();
    void keepConnectWithServer();

public:
    template<class T>
    void addMsg(T& msg);
    //void addMsg(void *msg);
    //void addMsg(MsgType msgType,std::string &msg);
    void addObserver(NetObserver* netObserver);    //需要接收网络消息的对象，应该调用此函数订阅网络消息
    void eraseObserver(NetObserver* netObserver);  //取消订阅
    static Network* getInstance();   //调用这个函数获取实例
};

template<class T>
void Network::addMsg(T& msg)
{

    int recvID = msg.recvid();        //获取接收者ID
    int msgType=msg.networktype();    //获取消息类型
    msg.clear_recvid();               //清除接收者ID
    msg.clear_networktype();          //清除消息类型

    qDebug()<<"模板已进入";
    size_t msgLen=msg.ByteSizeLong();   //获取消息字节长度
    char *msgBytes=(char*)malloc(msgLen);
    msg.SerializeToArray(msgBytes,msgLen);  //序列化到msgBytes中
    char *queueElement=(char *)malloc(sizeof(int)*2+3+msgLen);//发送队列元素
    //格式：接收者ID\n消息类型\n消息内容
    memset(queueElement,0,sizeof(*queueElement));
    sprintf(queueElement,"%d\n%d\n%d\n%s\n",recvID,msgType,msgLen,msgBytes);
    //sprintf(queueElement,"%d\n%d\n%s\n",recvID,msgType,"msgBytes");
    qDebug()<<queueElement;
    delete msgBytes;
    m_sendQueue->push(queueElement);//放入待队列当中
    m_sendMap->insert(std::pair<int,char*>(msg.msgid(),queueElement));
}

#endif // NETWORK_H
