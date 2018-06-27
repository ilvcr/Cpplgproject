/*************************************************************************
	> File Name: test_04.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月27日 星期三 20时38分49秒
    > Description:  用一个额外的参数表示数组的长度
 ************************************************************************/

#include<iostream>
using namespace std;

const lineLength = 12;
void putValues( int* ia, int sz ){
    cout << "( " << sz << " )< ";
    for( int i = 0; i < sz; ++i ){
        if( i % lineLength == 0 && i ){
            cout << "\n\t";
        }
        cout << ia[ i ];

        //用逗号分隔元素
        if( i % lineLength != lineLength-1 && i != sz-1 ){
            cout << ", ";
        }
    }
    cout << " >\n";
}



