/*************************************************************************
	> File Name: test_08.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月03日 星期二 21时07分13秒
    > Description:
 ************************************************************************/

#include<iostream>
using namespace std;

template<typename Type>
Type min( Type* array, int size ){
    Type min_val = array[0];

    for( int i = 1;i < size; ++i ){
        if( array[i] < min_val ){
            min_val = array[i];
        }
    }

    print( "Minimum value found: " );
    print( min_val );

    return min_val;
}


