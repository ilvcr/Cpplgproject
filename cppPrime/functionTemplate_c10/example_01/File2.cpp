/*************************************************************************
	> File Name: File2.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月03日 星期二 20时56分39秒
    > Description:
 ************************************************************************/

// ---- File2.C ----

#include<iostream>
#include<cstring>
#include"amx.h"
using namespace std;

// const char* 的模板显式特化
typedef const char* PCC;
template<> PCC max< PCC >( PCC s1, PCC s2 ) {/*.........*/}

void another(){
    // const char* max< const char* >( const char*, const char*  )的显式特化;
    const char* p = max( "hi", "again" );

    cout << "p: " << p << endl;

    return 0;
}


