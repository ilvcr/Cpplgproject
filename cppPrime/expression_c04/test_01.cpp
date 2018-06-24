/*************************************************************************
	> File Name: test_01.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月24日 星期日 22时40分25秒
    > Description: 乘法向一个char复制256, 因而导致溢出
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    char byte_value = 32;

    int ival = 8;

    //overflow of byte_value's available memory
    byte_value = ival * byte_value;
    
    cout << "byte_value: " << static_cast<int>(byte_value) << endl;

    return 0;
}


