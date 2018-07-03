/*************************************************************************
	> File Name: test_09.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月03日 星期二 21时14分51秒
    > Description:  针对 Array 类模板的 sort()函数模板定义
 ************************************************************************/

#include<iostream>
#include"Array.h"
using namespace std;

template<class elemType>
void sort( Array<elemType>& Array, int low, int high ){
    if( low < high ){
        int lo = low;
        int hi = high + 1;
        elemType elem = array[lo];
    
        
        for(;;){
            while( min( array[++lo], elem ) != elem && lo < high );
            while( min( array[--hi], elem ) == elem && hi > low );
            if( lo < hi ){
                swap( array, lo, hi );
            }
            else
                break;
        }

        swap( array, low, hi );
        sort( array, low, hi - 1 );
        sort( array, hi + 1, high );
    }
}


