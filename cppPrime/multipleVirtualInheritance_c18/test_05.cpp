/*************************************************************************
> File Name: test_05.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月30日 星期一 15时41分56秒
> Description: 
 ************************************************************************/

#ifndef ARRAY_H
#define ARRAY_H
#include<iostream>
using namespace std;


// 为了 operator<< 而需要的前向声明
template <class Type> class Array;
template <class Type> ostream& operator<<(ostream&, const Array<Tpe>&);
template <class Type>

class Array{

    static const int ArraySize = 12;

public:
    explicit Array(int sz=ArraySize){

        init(0, sz);
    }

    Array(const Type* ar, int sz){

        init(ar, sz);
    }

    Array(const Array& A){

        init(iA.ia, iA.size());
    }

    virtual ~Array(){

        delete [] ia;
    }

    Array& operator = (const Array&);
    int size(){

        return _size;
    }
    virtual void grow();

    virtual void print(ostream&= cout);

    Type at(int ix) const{

        return ia[ix];
    }
    virtual Type& operator[](int ix){

        return ia[ix];
    }

    virtual void sort(int, int);
    virtual int find(Type);
    virtual Type min();
    virtual Type max();

protected:
    void swap(int ,int);
    void init(const Type*, int);
    int _size;
    Type* ia;
}

#endif

int find(const Array<int>& ia, int value){

    for(int ix=0; ix < ia.size(); ++ix){
        
        // 现在变成了一个虚拟函数调用
        if(ia[ix] == value){

            return ix;
        }
    }

    return -1;
}


