/*************************************************************************
> File Name: test_05.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月23日 星期一 23时15分46秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

ostream& print(ostream& os = cout) const;

ostream& print(ostream& os = cout) const{
    _lop->print(os);

    os << " && ";

    _rop->print(os);
}



