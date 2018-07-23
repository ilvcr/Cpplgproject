/*************************************************************************
> File Name: test_06.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月23日 星期一 23时17分29秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

class Query{
public:
    //,,,
    //设置 _lparen 和 _rparen
    void lparen(short lp){
        _lparen = lop;
    }
    void rparen(short rp){
        _rparen = rp;
    }

    //获取 _lparen 和 _rparen 的值
    short lparen(){
        return _lparen;
    }
    short rparen(){
        return _rparen;
    }

    //打印左右括号
    void print_lparen(short cnt, ostream& os) const;
    void print_rparen(short cnt, ostream& os) const;
    
    virtual ostream& print(ostream& os) const;

protected:
    //拥有左右括号的数目
    short _lparen;
    short _rparen;

    //...
};


ostream& NotQuery::
print(ostream& os) const{
    os << " ! ";
    if(_lparen){
        print_lparen(_lparen, os);
    }
    _op->print(os);
    if(_rparen){
        print_lparen(_rparen, os);
    }

    return os;
}


void doit_and_bedone(vector<Query*>* pvec){
    vector<Query*>::iterator it = prev->begin(), end_it = prev->end();

    for(; it != end_it; ++it){
        Query* pq = *it;
        cout << "processing " << *pq <<endl;
        pq->eval();
        pq->display();
        delete pq;
    }
}


