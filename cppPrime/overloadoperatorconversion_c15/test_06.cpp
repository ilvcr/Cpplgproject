/*************************************************************************
> File Name: test_06.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月18日 星期三 12时44分15秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

class ScreenPtr{
public:
    ScreenPtr(Screen& s, int arraySize=0) 
        : ptr(&s), size(arraySize0, offset(0){}

private:
    int size;
    int offset;
    Screen* ptr;
};

Screen& ScreenPtr::operator++(){
    if(size == 0){
        cerr << "cannot increment pointer to single object\n";
        return *ptr;
    }

    if(offset >= size-1){
        cerr << "already at the end of the array\n";
        return *ptr;
    }

    ++offset;
    return *++ptr;
}

Screen& ScreenPtr::operator--(){
    if(size == 0){
        cerr << "cannot decrement pointer to single object\n";
        return *ptr;
    }

    if(offset <=0){
        cerr << "already at the beginning of the array\n";
        return *ptr;
    }

    --offset;
    return *--ptr;
}


