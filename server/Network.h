#ifndef _Network_H_
#define _Network_H_


#include <queue>
#include <sys/socket.h>
#include "ServerManager.h"
#include "MsgType.h"
#include "Msg/SignUp.pb.h"
#include <netinet/in.h>
#include <iostream>
#include <arpa/inet.h>
#include <ctime>
#include "BuildP2P.h"

class ServerManager;
class BuildP2P;



class Network
{
	private:
		std::queue<char*> *m_sendQueue;
		std::queue<char*> *m_recvQueue;
		std::map<int,struct sockaddr_in> *m_netInfoMap;  //网络信息
		std::map<int,clock_t> m_time;
		std::map<int,char*> m_allsendMap;
		static Network* m_instance;
		static int NetMsgID;
	private:
		Network(std::queue<char*> *sendQueue,
				std::queue<char*> *recvQueue,
				std::map<int,struct sockaddr_in> *netInfoMap);
		Network(Network&);
		int socketFd;


	public:
		friend void sendMsg(Network*);
		friend void recvMsg(Network*);
		friend class ServerManager; 
		friend class BuildP2P;

		template<class T>
			void addMsg(T& msg);
		static Network* getInstance();
};
void sendMsg(Network*);
void recvMsg(Network*);

	template<class T>
void Network::addMsg(T& msg)
{
	std::cout<<"-------------------------Network::addMsg---------------------------\n";
	int recvID = msg.recvid();        //获取接收者ID，根据其选择在m_netInfo中选择IP:post 发送消息
	int msgType=msg.networktype();    //获取消息类型，加在报文头部，接收端根据其确定解析类型
	int sendID=msg.sendid();          //发送者ID，加在报文头部，便于快速确认消息，同时更新m_netInfo
	int msgID= NetMsgID++;           //消息ID，加在报文头部，用于确认消息(ACK)
	if(MsgType::ACK==msgType)
		msgID=msg.msgid();
	else
		msg.set_msgid(msgID);
	size_t msgLen=msg.ByteSizeLong();   //获取消息字节长度


	char msgBytes[msgLen+1]={0};
	msg.SerializeToArray(msgBytes,msgLen);  //序列化到msgBytes中
	int len=sizeof(int)*5+7+msgLen;
	char *queueElement=(char *)malloc(len);//发送队列元素 
	memset(queueElement,0,len);

	/*格式：接收者ID\n发送者ID\n消息ID\n消息类型\n消息内容长度\n消息内容
	 *为什么用这种格式，因为对端接收到消息做下面几件事：
	 *              1)立马回一个ACK
	 *              2)更新接收者与网络映射map
	 *              3)根据消息类型，解析消息
	 */

	snprintf(queueElement,len,"%d\n%d\n%d\n%d\n%d\n%s\n",recvID,sendID,msgID,msgType,msgLen,msgBytes);

	std::cout<<"-------------------addMsg--:"<<msgID<<"--MsgType--:"<<msgType<<"----------------\n";
	
	m_sendQueue->push(queueElement);       //放入待发队列当中
	if(msgType==MsgType::ACK)              //ACK消息不需要重发，不插入m_sendMap中
		return;
	m_allsendMap.insert(std::pair<int,char*>(msgID,queueElement));  //插入未确认表
}


#endif
