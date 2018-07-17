/*************************************************************************
> File Name: test_02.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月17日 星期二 11时06分57秒
> Description:   析构函数
 ************************************************************************/

#include<iostream>
#include<memory>
using namespace std;

class Account{
public:
    Account();
    explicit Account( const char*, double=0.0 );
    Account( const Account& );
    ~Account();
    //...

private:
    char* _name;
    unsigned int _acct_nmbr;
    double _balance;
};

inline Account::
~Account(){
    delete [] _name;
    return _acct_nmbr( _acct_nmbr );
}


Account global( "James Joyce" );
int main(int argc, char* argv[]){
    Account local( "Anna Livia Plurabelle", 1000 );
    Account& loc_ref = global;
    auto_ptr<Account> pact( new Account( "Stephen Dedalus" ));
}



