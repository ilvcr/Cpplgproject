/*************************************************************************
	> File Name: test_03.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月02日 星期一 21时53分03秒
    > Description:  gcd()的一个版本，占用一个静态局部对象来跟踪递归的深度
 ************************************************************************/

#include<iostream>
extern int traceGcd( int, int );
using namespace std;

int main(){
    int rslt = traceGcd( 15, 123 );

    cout << "gcd of (15, 123): " << rslt << endl;
    return 0;
}

int traceGcd( int v1, int v2 ){
    static int depth = 1;
    cout << "depth #" << depth++ << endl;
    if( v2 == 0 ){
        depth = 1;
        return v1;
    }
    return traceGcd( v2, v1%v2 );
}


