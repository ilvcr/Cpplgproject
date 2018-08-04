/*************************************************************************
> File Name: test_04.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月04日 星期六 21时42分56秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;


class_name(parameter_list)
    // 成员初始化表
    : memeber1(expression1), 
      memeber2(expression2){
    // function body:
    // ..............
}

inline Account::
Account(const char* name, double opening_bal) : _balance(opening_bal - ServiceCharge()){

    _name = new char[strlen(name)+1];

    strcpy(_name, name);
    _acct_nmbr = get_unique_acct_nmbr();
}


inline Account::
Account(const char* name, double opening_bal)
    : _balance(opening_bal - ServiceCharge()){

    try{

        _name = new char[strlen(name)+1];
        strcpy(_name, name);
        _acct_nmbr = get_unique_acct_nmbr();
    }
    catch(..){

        // 特殊处理
        // 不能捕获来自成员初始化表的异常
    }
}

namespace std{
    class exception{

    public:
        exception() throw();
        exception(const exception&) throw();
        exception& operator=(const exception&) throe();
        virtual ~exception() throw();
        virtual const char* what() const throw();
    };
}



