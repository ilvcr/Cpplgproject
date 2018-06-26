/*************************************************************************
	> File Name: test_02.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月26日 星期二 10时58分05秒
    > Description:  iterator迭代器
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;


void 
even_odd( const vector<int>* pvec, vector<int>* pvec_even, vector<int>* pvec_odd){
    //必须声明一个 const_iterator, 才能够遍历 pvec
    vector<int>::const_iterator c_iter = pvec->begin();
    vector<int>::const_iterator c_iter_end = pvec->end();

    for(; c_iter != c_iter_end; ++c_iter){
        if( *c_iter % 2 ){
            pvec->odd->push_back( *c_iter );
        }
        else{
            pvec_even->push_back( *c_iter );
        }
    }
}


