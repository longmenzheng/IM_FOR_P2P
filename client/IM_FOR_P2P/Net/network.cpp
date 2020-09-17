#include "network.h"
//#include "cstring"
#include "Connect.pb.h"
//#include "ACK.pb.h"
#include <thread>
#include <exception>
#include "ackhandler.h"
#include "clientmanager.h"


Network* Network::m_instance=nullptr;
int Network::NetMsgID=-1;
Network::Network():
    m_sendQueue(new std::queue<const char*>()),
    m_sendMap(new std::map<int,char*>()),
    m_recvQueue(new std::queue<const char*>()),
    m_observers(new std::list<NetObserver*>()),
    m_netInfo(new std::map<int,NetworkAddr>()),
    m_time(new std::map<int,clock_t>()),
    m_udpSocket(new QUdpSocket())
{
    //m_udpSocket->bind(QHostAddress(QString("127.0.0.1")),quint16(7890));
    pSendThread=new SendThread(m_sendQueue,m_sendMap,m_netInfo,m_time,m_udpSocket);
    pRecvThread=new RecvThread(m_recvQueue,m_netInfo,m_udpSocket);
    pDistributeThread=new DistributeThread(m_recvQueue,m_observers);

    pSendThread->start();         //启动发送线程
    pRecvThread->start();         //启动接收线程
    pDistributeThread->start();   //启动分发线程

    //启动ack处理者
    ACKHandler *ackhandler=new ACKHandler(m_sendMap,m_time);
    addObserver(ackhandler);


    m_timeout=new QTimer(this);
    //m_timeout->start(50000);
    connect(m_timeout,&QTimer::timeout,this,&Network::keepConnectWithServer);

    //下面为测试代码

    NetworkAddr tmp;
    tmp.ip=QHostAddress("116.62.46.162");
    tmp.port=23333;
    m_netInfo->insert(std::pair<int,NetworkAddr>(0,tmp));


}

Network::Network(Network&)
{

}



void Network::keepConnectWithServer()
{
    IM::Connect con;
    con.set_msgid(++NetMsgID);
    con.set_recvid(0);
    con.set_sendid(ClientManager::getInstance()->getUserInfo()->userID);
    con.set_networktype(MsgType::CONNECT);
    Network::getInstance()->addMsg(con);
}


void Network::addObserver(NetObserver* netObserver)
{
    m_observers->push_back(netObserver);   //从尾部插入
}

void Network::eraseObserver(NetObserver* netObserver)
{
    m_observers->remove(netObserver);      //取消订阅，移除该订阅者
}

Network* Network::getInstance()
{
    if(m_instance==nullptr)
    {
        m_instance=new Network();
    }
    return m_instance;
}
