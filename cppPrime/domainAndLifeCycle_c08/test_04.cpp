/*************************************************************************
	> File Name: test_04.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月02日 星期一 21时57分35秒
    > Description: 程序说明了自动和静态局部变量的缺省初始化以及不初始化自动对象的危险
 ************************************************************************/

#include<iostream>
using namespace std;

const int iterations = 2;

void func(){
    int value1, value2;  //未初始化
    static int depth;    //隐式初始化未0

    if( depth < iterations ){
        ++depth;
        func();
    }
    else{
        depth = 0;
    }

    cout << "\nvalue1:\t" << value1;
    cout << "\nvalue2:\t" << value2;
    cout << "\tsum:\t" << value1 + value2;
}

int main(){
    for( int ix = 0; ix < iterations; ++x ){
        func();
    }
    return 0;
}


