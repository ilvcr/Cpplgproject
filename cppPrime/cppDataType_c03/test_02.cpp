/*************************************************************************
	> File Name: test_02.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月22日 星期五 14时01分03秒
    > Description:  计算2的10次方->方法2
 ************************************************************************/

#include<iostream>
using namespace std;
extern int pow( int, int );

int main()
{
    int val = 2;
    int exp = 15;
    cout << " The Powers of 2\n";

    for( int cnt=0; cnt <= exp; ++cnt )
    {
        cout << cnt << ": "
            << pow( val, cnt ) << endl;
    }

    return 0;
}

int
pow( int val, int exp )
{
    int res;
    for( res=1; exp > 0; --exp )
    {
        res *= val;
    }

    return res;
}


