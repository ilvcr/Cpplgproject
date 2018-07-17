/*************************************************************************
> File Name: test_01.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月17日 星期二 10时50分58秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

class Data{
public:
    int ival;
    char* ptr;
};


class Account{
public:
    //缺省构造函数
    Account();
    //...
    Account( const char*, double = 0.0 );
    const char* name(){ return _name; }

private:
    char* _name;
    unsigned int _acct_nmbr;
    double _balance;
};

//缺省Account构造函数
inline Account::
Account(){
    _name = 0;
    _balance = 0.0;
    _acct_nmbr = 0;
}

//使用成员初始化表的缺省Account构造函数
inline Account::
Account()
    : _name(0), _balance(0.0), _acct_nmbr(0){
        
    }

//双参构造函数
inline Account::
Account( const char* name, double opening_bal )
    : _balance( opening_bal ){
        _name = new char[ strlen(name) + 1 ];
        strcpy( _name, name );

        _acct_nmbr = get_unique_acct_nmbr();
    }

//拷贝构造函数
inline Account::
Account( const Account& rhs ) : _balance( rhs._balance ){
    
    _name = new char[ strlen(rhs._name) + 1 ];
    strcpy( _name, rhs._name );

    //不能拷贝rhs._acct_nmbr
    _acct_nmbr = get_unique_acct_nmbr();
}


