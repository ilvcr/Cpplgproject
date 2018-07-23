/*************************************************************************
> File Name: test_01.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月23日 星期一 19时34分37秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

// 非面向对象的方案
union op_type{
    // union 不能包含带有相关构造函数的类对象
    NotQuery* nq;
    OrQuery* oq;
    AndQuery* aq;
    string* word;
};

enum opTypes{
    Not_query = 1, Or_query, And_query, Name_query;
};

class AndQuery{
public:
    //...
private:
    /*
     * op_types 含有查询的实际操作数类型
     * opTypes 确定每个操作数的类型
     */
    op_type _lop, _rop;
    opTypes _lop_type, _rop_type;
};


void AndQuery::
eval(){
    // 非面向对象的方案
    // 把类型解析的负担留给了程序员
    // 指出左操作数的实际类型
    switch(_lop_type){
        case And_query:
            AndQuery* paq = static_cast<AndQuery*>(_lop);
            paq->eval();
            break;
        case Or_query:
            OrQuery* poq = static_cast<OrQuery*>(_lop);
            poq->eval();
            break;
        case Not_query:
            NotQuery* pnotq = static_cast<NotQuery*>(_lop);
            pnotq->eval();
            break;
        case Name_query:
            NameQuery* pnmq = static_cast<NameQuery*>(_lop);
            pnmq->eval();
            break;
    }
    // 对右操作数同样
}


