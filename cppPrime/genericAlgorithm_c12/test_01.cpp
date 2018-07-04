/*************************************************************************
	> File Name: test_01.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月04日 星期三 11时37分14秒
    > Description:  find()泛化实现
 ************************************************************************/

#include<iostream>
using namespace std;

template<class ForwardIterator, class Type>
    ForwardIterator

find( ForwardIterator first, ForwardIterator last, Type value ){
    for( ; first != last; ++first ){
        if( value == *first ){
            return first;
        }
    }

    return last;
}



