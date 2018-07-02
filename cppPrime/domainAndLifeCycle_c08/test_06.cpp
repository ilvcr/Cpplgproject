/*************************************************************************
	> File Name: test_06.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月02日 星期一 22时14分20秒
    > Description:
 ************************************************************************/

#include<iostream>
using namespace std;

const int max = 65000;
const int lineLength = 12;

void fibonaci( int max ){
    if( max < 2 ){
        return;
    }
    cout << " 0 1";

    int v1 = 0, v2 = 1, curr;
    for( int ix = 3; ix < max; ++ix ){
        curr = v1 + v2;
        if( curr > ::max ){
            break;
        }
        cout << curr << " ";
        v1 = v2;
        v2 = curr;
        if( ix % lineLength == 0 ){
            cout << endl;
        }
    }
}

int main(){
    cout << " fibonaci Series: 16\n";
    fibonaci( 16 );

    return 0;
}


