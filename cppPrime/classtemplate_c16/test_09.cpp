/*************************************************************************
> File Name: test_09.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月19日 星期四 23时58分37秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

template<class elemType>
elemType Array<elemType>::min(){

    assert(_ia != 0);
    elemtype min_val = _ia[0];
    for(int ix=1; ix < _size; ++ix){
        if(_ia[ix] < min_val){
            min_val = _ia[ix];
        }
    }
    return min_val;
}

template<class elemType>
elemType Array<elemType>::max(){

    assert(_ia != 0);
    elemType max_val = _ia[0];
    for(int ix=1; ix < _size; ++ix){
        if(max_val < _ia[ix]){
            max_val = _ia[ix];
        }
    }
    return max_val;
}

template<class elemType>
int Array<elemType>::find(elemType val){

    for(int ix=0; ix < _size; ++ix){
        if(val == _ia[ix]){
            return ix;
        }
    }
    return -1;
}


template<class elemType>
void Array<elemType>::swap(int i, int j){
    elemType tmp = _ia[i];
    _ia[i] = _ia[j];
    _ia[j] = tmp;
}


template<class elemType>
void Array<elemType>::sort(int low, int high){
    if(low >= high){
        return;
    }

    int lo = low;
    int hi = high + 1;
    elemType elem = _ia[low];
    for(;;){
        while(_ia[++lo] < elem && lo < high);
            while(_ia[--hi] > elem && hi > low);
                if(lo < hi){
                    swap(lo, hi);
                }
                else{
                    break;
                }
    }
    swap(loww, hi);
    sort(low, hi-1);
    sort(hi+1, high);
}


