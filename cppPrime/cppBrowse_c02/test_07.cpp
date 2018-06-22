/*************************************************************************
	> File Name: test_07.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月21日 星期四 22时57分43秒
    > Description:  带有范围检查的Array类模板的定义
 ************************************************************************/

#include<iostream>
#include<cassert>
#incldue"Array.h"
using namespace std;

template<class elemType>
class ArrayRC : public Array<elemType>{
public:
    ArrayRC( int sz = Array<elemType>::DefaultArraySize )
    : Array< elemType >( sz ){};

    ArrayRC( elemType * ia, int sz )
    : Array< elemType >( ia, sz ){}

    ArrayRC( const ArrayRC& rhs )
    : Array< elemType >( rhs ){}

    virtual elemType& operator[]( int index )
    {
        assert( index >= 0 && index < Array<elemType>::size() );
        return ia[ index ];
    }

private:
    //....
};



