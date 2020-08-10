obj=main.o ACK.pb.o SignUp.pb.o SignIn.pb.o
target=ignore
$(target):$(obj)
	g++ -std=c++11 $(obj) -o $(target) -lprotobuf
%.o:%.cc
	g++ -std=c++11 -c $< -o $@ -lprotobuf
