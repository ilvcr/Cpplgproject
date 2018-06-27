/*************************************************************************
	> File Name: test_03.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月27日 星期三 14时23分30秒
    > Description:
 ************************************************************************/

#include<iostream>
using namespace std;

void ptrswap( int*& v1, int*& v2 )
//从右向左读:v1是一个引用，引用一个指针，指针指向int型对象

int main(){
    int i = 10;
    int j = 20;

    int* pi = &i;
    int* pj = &j;

    cout << "Before ptrswap(): \tpi: " << *pi << "\tpj:" << *pj << endl;
    ptrswap( pi, pi );

    cout << "After ptrswap(): \tpi: " << *pi << "\tpj:" << *pj << endl;

    return 0;
}


