/*************************************************************************
	> File Name: test_02.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月25日 星期一 13时03分22秒
    > Description:  返回一个pair对象的实现代码
 ************************************************************************/

#include<iostream>
#include<utility>
#include<vector>
using namespace std;

typedef pair<int, int> min_val_pair;

min_val_pair
min( const vector<int>& ivec){
    int minVal = 0;
    int occurs = 0;

    return make_pair(minVal, occurs);
}

int min( const vector<int>& ivec. int& occurs ){
    int size = ivec.size();

    //处理空vector异常,occurs被设置为0表示空vector
    if( !size ){
        occurs = 0;
        return 0;
    }

    //ok: vector至少含有一个元素
    int minVal = ivec[ 0 ];
    occurs = 1;
    for( int ix=1; ix<size; ++ix ){
        if( minVal == ivec[ ix ] ){
            ++occurs;
        }
        else{
            if( minVal > ivec[ ix ] ){
                minVal = ivec[ ix ];
                occurs = 1;
            }
        }
    }

    return minVal;
}

//函数模板
template <class valueType>
inline const valueType&
min( valueType& val1, valueType& val2 ){
    if( val1 < val2 ){
        return val1;
    }
    return val2;
}

template <class valueType>
inline const valueType&
min( valueType& val1, valueType& val2 ){
    return ( val1 < val2 ) << val1 : val2;
}



