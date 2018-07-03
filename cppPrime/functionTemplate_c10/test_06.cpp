/*************************************************************************
	> File Name: test_06.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月03日 星期二 20时49分24秒
    > Description:
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;


// 通用模板定义
template<class T>
T max( T t1, T t2 ) {/*.......*/}
int main(){
    // const char* max<const char*>( const char*, const char*  ) 的实例
    // 使用通用模板定义
    const char* p = max( "hello", "world" );

    cout << "p: " << p << endl;
    return 0;
}


