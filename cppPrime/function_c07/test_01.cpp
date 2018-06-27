/*************************************************************************
	> File Name: test_01.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月27日 星期三 14时07分29秒
    > Description:  函数定义的例子
 ************************************************************************/

#include<iostream>
using namespace std;

int abs( int );
int min( int, int );
int gcd( int, int );

inline int abs( int iobj ){
    //返回iobj的绝对值
    return( iobj < 0 ? -iobj : iobj );
}

inline int min( int p1, int p2 ){
    //返回较小值
    return( p1 < p2 ? p1 : p2 );
}

int gcd( int v1, int v2 ){
    // 返回最大公约数
    while( v2 ){
        int temp = v2;
        v2 = v1 % v2;
        v1 = temp;
    }

    return v1;
}

//使用
int main(){
    //get values from standard input
    cout << "Enter first value: ";
    int i;
    cin >> i;
    if( !cin ){
        cerr << "!<<Oops: input error - Bailing out!\n";
        return -1;
    }

    cout << " Enter second value: ";
    int j;
    cin >> j;
    if( !cin ){    
        cerr << "!<<Oops: input error - Bailing out!\n";
        return -2;
    }

    cout << "\nmin: " << min( i, j ) << endl;
    i = abs( i );
    j = abs( j );

    cout << "gcd: " << gcd( i, j ) << endl;

    return 0;
}


