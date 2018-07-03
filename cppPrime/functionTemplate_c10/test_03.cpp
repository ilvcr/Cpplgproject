/*************************************************************************
	> File Name: test_03.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月03日 星期二 20时24分43秒
    > Description:
 ************************************************************************/

#include<iostream>
using namespace std;

template<class Type, int size>
Type min( const Type( &r_array )[size] ){
    /* 找到数组中元素最小值的参数化函数 */
    Type min_val = r_array[0];

    for( int i = 1; i < size; ++i ){
        if( r_array[i] < min_val ){
            min_val = r_array[i];
        }
    }

    return min_val;
}


// size 指定数组参数的大小并初始化一个 const int 值
template<class Type, int size>
Type min( const Type (&r_array)[size] ){
    const int loc_size = size;
    Type loc_size[loc_size];
    //.....
}

typedef double Type;
template<class Type>
Type min( Type a, Type b ){
    // tmp 类型为模板参数 Type
    // 不是全局 typedef
    Type tmp = a < b ? a : b;
    return tmp;
}


template<class Parm, class U>
Parm minus( Parm* array, U value ){
    typename Parm::name *p;
}



