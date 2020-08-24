#ifndef RELATIONMANAGE_H
#define RELATIONMANAGE_H
#include <QString>

class RelationManage
{
public:
    virtual ~RelationManage(){};
    virtual bool searchBuilded(QString&)=0;
    virtual bool searchNoBuild(QString&)=0;
    virtual void add(int&)=0;
    virtual void del(int&)=0;
    virtual void modify()=0;

};

#endif // RELATIONMANAGE_H
