/*************************************************************************
> File Name: test_07.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月15日 星期日 23时42分15秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

class Account{
    Account( double amount, const string& owner );
    string owner(){
        return _owner;
    }

private:
    static double _interestRate;
    double _amount;
    string _owner;
};


bool limitTest(double limit){
    return limit <= Account::interest();
}

int main(int argc, char* argv[]){
    double limit = 0.05;

    if(limitTest(limit)){
        // static 类成员的指针被声明为普通指针
        void(*psf)(double) = &Account::raiseInterest;
        psf( 0.0025 );
    }

    Account ac1(5000, "Asterix");
    Account ac2(10000, "Obelix");
    if( compareRevenue(ac1, &ac2) > 0){
        cout << ac1.owner()
             << " is richer than "
             << ac2.owner() << "\n";
    }
    else{
        cout << ac1.owner()
             << " is poorer than "
             << ac2.owner() << "\n";
    }

    return 0;
}


