/*************************************************************************
> File Name: test_04.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月23日 星期一 20时10分22秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

bool NameQuery::
compare(const Query* pqquery){
    //ok: 其 Query 子对象的 protected 成员
    int myMatches = _loc.size();

    //ok: 使用公有访问的方法
    int itsMatches = pqquery->location()->size();
    return myMatches == itsMatches;
}


inline NotQuery::
NotQuery(Query* op = 0) : _op(op) {}

inline OrQuery::
OrQuery(Query* lop = 0, Query* rop = 0) : _lop(lop), _rop(rop)i
{}

inline AndQuery::
AndQuery(Query* lop = 0, Query* rop = 0) : _lop(lop), _rop(rop)
{}

class BinaryQuery : public Query{
public:
    const Query* lop(){
        return _lop;
    }
    const Query*rop(){
        return _rop;
    }

protected:
    BinaryQuery(Query* lop, Query*rop) : _lop(lop), _rop(rop)
    {}

    Query* _lop;
    Query* _rop;
};


class OrQuery : public BinaryQuery{
public:
    OrQuery(Query* lop, Query* rop) : BinaryQuery(lop, lop)
    {}
    virtual void eval();
};

class AndQuery : public BinaryQuery{
public:
    AndQuery(Query* lop, Query* rop) : BinaryQuery(lop, rop)
    {}
};


