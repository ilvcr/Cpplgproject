/*************************************************************************
	> File Name: test_02.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月03日 星期二 20时22分22秒
    > Description:  min()的函数模板定义
 ************************************************************************/

#include<iostream>
using namespace std;

template<class Type>
Type min( Type a, Type b ){
    return a < b ? a : b ;
}

int main(){
    //ok: int min( int, int  );
    min( 10, 20 );
    // ok: double min( double, double  );
    min( 10.0, 20.0 );

    return 0;
}


