/*************************************************************************
	> File Name: test_02.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月02日 星期一 21时35分05秒
    > Description: 函数定义了两层局部域,对一个有序的整型vector进行二分查找
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

const int notFound = -1;  //全局域

int binSearch( const vector<int>& vec, in t val ){
    //局部域：层次  #1
    int low = 0;
    int high = vec.size() - 1;
    while( low <= high ){
        //局部域：层次 #2
        int mid = ( low + high ) / 2;
        if( val == vec[ mid ] ){
            return mid;
        }
        if( val < vec[ mid ] ){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return notFound;  //局部域：层次  #1
}


