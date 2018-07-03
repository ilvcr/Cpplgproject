/*************************************************************************
	> File Name: File1.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月03日 星期二 20时54分21秒
    > Description:
 ************************************************************************/

// ---- File1.C ----

#include<iostream>
#include"max.h"
using namespace std;

void another();

int main(){
    // const char* max<const char*>( const char*, const char*  )的实例
    
    const char* p = max( "hello", "world" );

    cout << "p: " << p << endl;
    another();

    return 0;
}


