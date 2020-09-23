obj=main.o ServerManager.o Network.o WorkStudio.o ServerWorker.o ServerFactory.o SignIn.o SignUp.o Msg/ACK.pb.o Msg/SignUp.pb.o Msg/SignIn.pb.o Msg/ModifyInfo.pb.o ModifyInfo.o Msg/RelationManage.pb.o AddFriend.o Msg/LoadFriendInfo.pb.o LoadFriendInfo.o Msg/ApplyAgree.pb.o ApplyHandle.o Msg/ChatMsg.pb.o Chat.o Msg/BuildP2P.pb.o BuildP2P.o
target=server
$(target):$(obj)
	g++ -std=c++11 $(obj) -o $(target) -lpthread -lmysqlclient -lprotobuf

%.o:%.cpp
	g++ -std=c++11 -c $< -o $@ -lpthread -lmysqlclient
