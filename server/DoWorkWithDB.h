#incldue "WorkStudio.h"
#include <mysql/msyql.h>

class DoWorkWithDB:public WorkStudio
{
private:
	std::queue<MYSQL> m_DBconnectQueue;
public:
	void addDBconnectCount();
	void dowork();
	void 

};
