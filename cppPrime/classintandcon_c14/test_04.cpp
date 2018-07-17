/*************************************************************************
> File Name: test_04.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月17日 星期二 12时39分33秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

void
Account::
dealloc_heap_array( Account* ps, size_t elems ){

    for(int ix=0; ix < elems; ++ix){
        ps[ix].Account::~Account();
    }

    delete [] reinterpret_cast<char*>(ps);
}

inline Account::
Account( const string& name, double opening_bal ): _name(name), _balance(opening_bal){

    _acct_nmbr = get_unique_acct_nmbr();
}

inline Account::
Account( const char* name, double opening_bal ){

    _name = name;
    _balance = opening_bal;
    _acct_nmbr = get_unique_acct_nmbr();
}

inline Account::
Account( const Account& rhs ){
    
    _acct_nmbr = rhs._acct_nmbr;
    _balance = rhs._balance;

    // C++伪代码
    // 说明调用了一个类成员
    // 对象的拷贝构造函数
    _name.string::string(rhs._name);
}

inline Account&
Account::
operator=( const Account& rhs ){
    
    _name = rhs.name;
    _balance = rhs._balance;
    _acct_nmbr = rhs._acct_nmbr;
}

// 拷贝赋值操作符的一般形式
className&
className::
operator=( const className& rhs ){
    
    // 保证不会自我拷贝
    if(this != &rhs){
        // 类拷贝语义
    }

    // 返回被赋值的对象
    return *this;
}

Account&
Account::
operator=( const Account& rhs ){
    
    // 避免向自身赋值
    if(this != &rhs){
        delete [] _name;
        _name = new char[strlen(rhs._name) + 1];
        strcpy( _name, rhs._name );
        _balance = rhs._balance;
        _acct_nmbr = rhs._acct_nmbr;
    }

    return *this;
}


