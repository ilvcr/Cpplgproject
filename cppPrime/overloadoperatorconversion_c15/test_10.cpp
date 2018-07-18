/*************************************************************************
> File Name: test_10.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月18日 星期三 13时31分55秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

class SmallInt{
    friend istream& operator>>(istream& is, SmallInt& s);
    friend ostream& operator<<(ostream& os, const SmallInt& s){
        return os << s.value;
    }

public:
    SmallInt(int i=0) : value(rangeCheck(i)){}
    int operator=(int i){
        return value=rangeCheck(i);
    }
    operator int(){
        return value;
    }

private:
    int rangeCheck(int);
    int value;
};

istream& operator>>(istream& is, SmallInt& si){
    int ix;
    is >> ix;
    si = ix;    // SmallInt::operator=(int)
    return is;
}

int SmallInt::rangeCheck(int i){
    /* 如果前 8 位以外的位被置位
     * 则报告值太大了: 然后退出 */
    if(i & ~0377){
        cerr << "\en***SmallInt range error: " << i << " ***" << endl;
        exit( - 1 );
    }

    return i;
}


