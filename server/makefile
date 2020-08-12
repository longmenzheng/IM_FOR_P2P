obj=main.o ServerManager.o Network.o WorkStudio.o ServerWorker.o ServerFactory.o SignIn.o SignUp.o Msg/ACK.pb.o Msg/SignUp.pb.o Msg/SignIn.pb.o
target=server
$(target):$(obj)
	g++ -std=c++11 $(obj) -o $(target) -lpthread -lmysqlclient -lprotobuf

%.o:%.cpp
	g++ -std=c++11 -c $< -o $@ -lpthread -lmysqlclient
