/*************************************************************************
	> File Name: test_05.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月26日 星期二 11时30分12秒
    > Description:  找到字符串中的第一个数字
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string numerics( "0123456789" );
    string name( "r2d2" );
    string::size_type pos = name.find_first_of( numerics );

    cout << " found numerics at index: " << pos << "\telement is " << name[pos] << endl;
}


