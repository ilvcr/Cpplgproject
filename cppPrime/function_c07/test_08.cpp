/*************************************************************************
	> File Name: test_08.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月27日 星期三 21时25分24秒
    > Description:
 ************************************************************************/

#include<iostream>
using namespace std;

int min( int*, int* );
int (*pf)(int*, int) = min;

const int iaSize = 5;
int ia[ iaSize ] = {7, 4, 9, 2, 5};

int main(){
    cout << " Direct call: min: "
        << min( ia, iaSize ) << endl;

    cout << "Indirect call: min: "
        << pf( ia, iaSize ) << endl;

    return 0;
}

int min( int* ia, int sz ){
    int minVal = ia[ 0 ];

    for( int ix = 1; ix < sz; ++ix ){
        if( minVal > ia[ ix ] ){
            minVal = iz[ ix ];
        }
    }
    return minVal;
}


