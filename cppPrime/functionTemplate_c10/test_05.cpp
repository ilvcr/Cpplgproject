/*************************************************************************
	> File Name: test_05.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月03日 星期二 20时44分56秒
    > Description:
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

// const char* 显式特化:
// 覆盖了来自通用模板定义的实例
typedef const char* PCC;
template<> PCC max< PCC >( PCC s1, PCC s2 ){
    return ( strcmp( s1, s2 ) > 0 ? s1 : s2 );
}

// 函数模板 max() 的定义以及对 const char* 的特化
int main(){
    // 调用实例: int max< int >( int, int  );
    int i = max( 10, 5 );

    // 调用显式特化: const char* max< const char* >( const char*, const char*  );
    const char* p = max( "hello", "world" );

    cout << "i: " << i << "p: " << p << endl;
    return 0;
}


