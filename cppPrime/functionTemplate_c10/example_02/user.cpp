/*************************************************************************
	> File Name: user.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月03日 星期二 21时12分19秒
    > Description:
 ************************************************************************/

// ---- user.C ----

#include<iostream>
#include<primer.h>
#include"user.h"
using namespace std;

SmallInt asi[4];
int main(){
    // 设置 asi 的元素
    // min( SmallInt*, int  ) 的实例
    int size = sizeof(asi) / sizeof( SmallInt );
    min( &asi[0], size );
}


