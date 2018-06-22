/*************************************************************************
	> File Name: test_04.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月21日 星期四 21时48分12秒
    > Description:  完整的 IntArrayRC派生类定义被放在一个独立的头文件 IntArrayRC.h中,
    该文件包含头文件 IntArray.h,而IntArray.h 包含有 IntArray 类的定义
 ************************************************************************/

#include<iostream>
#include<cassert>
using namespace std;

#ifndef IntArrayRC_H
#define IntArrayRC_H

#include"IntArray.h"

class IntArrayRC : public IntArray{

public:
    IntArrayRC( int sz = DefaultArraySize );
    IntArrayRC( int *array, int array_size );
    IntArrayRC( const IntArrayRC &rhs );
    virtual int& operator[]( int ); //返回下标为x的元素的地址引用

private:
    void check_range( int );

};
#endif

inline int& IntArrayRC::operator[]( int index )
{
    check_range( index );
    return ia[ index ];
}

inline void IntArrayRC::check_range(int index)
{
    assert( index >= 0 && index < size );
}


