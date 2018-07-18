/*************************************************************************
> File Name: test_07.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月18日 星期三 12时51分59秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

class ScreenPtr{
    //非成员声明
    friend Screen& operator++(ScreenPtr&);     //前置
    friend Screen& operator--(ScreenPtr&);
    friend Screen& operator++(ScreenPtr&, int); //后置
    friend Screen& operator--(ScreenPtr&, int);

public:
    //成员定义
};

Screen& ScreenPtr::operator++(int){
    if(size ==0){
        cerr << "cannot increment pointer to single object\n";
        return *ptr;
    }
    if(offset == size){
        cerr << "already one past the end of the array\n";
        return *ptr;
    }
    ++offset;
    return *ptr++;
}


Screen& ScreenPtr::operator--(int){
    if(size == 0){
        cerr << "cannot decrement pointer to single object\n";
        return *ptr;
    }
    if(offset == -1){
        cerr << "already one before the beginning of the array\n";
        return *ptr;
    }
    --offset;
    return *ptr--;
}


