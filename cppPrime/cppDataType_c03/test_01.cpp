/*************************************************************************
	> File Name: test_01.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月22日 星期五 13时55分26秒
    > Description: 计算2的10次方->方法1
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    //int类型的对象
    int value = 2;
    int pow = 10;
    cout << value << " raise to the power of "
        << pow << ": \t";

    int res = 1;//保存结果

    //循环控制语句，反复计算res，直至cnt大于pow
    for( int cnt=1; cnt <= pow; ++cnt )
        res *= value;

    cout << res << endl;

    return 0;

}


