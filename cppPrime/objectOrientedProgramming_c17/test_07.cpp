/*************************************************************************
> File Name: test_07.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月23日 星期一 23时27分25秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

class BinaryQuery : public Query{
public:
    BinaryQuery(Query* lop, Query* rop, string oper) : _lop(lop), _rop(rop), _oper(oper)
    {}

    ~BinaryQuery(){
        delete _lop;
        delete _rop;
    }

    ostream& print(ostream& =cout) const = 0;

protected:
    Query* _lop;
    Query* _rop;
    string _oper;
};

inline ostream& BinaryQuery::
print(ostream& os) const{
    if(_lparen){
        print_lparen(_lparen, os);
    }

    _lop->print(os);

    os << ' ' << _oper << ' ';
    _rop->print(os);

    if(_rparen){
        print_rparen(_rparen, os);
    }

    return os;
}

inline ostream& AndQuery::
print(ostream& os) const{

    // ok: 抑制虚拟机制
    // 静态调用 BinaryQuery::print
    BinaryQuery::print(os);
}



