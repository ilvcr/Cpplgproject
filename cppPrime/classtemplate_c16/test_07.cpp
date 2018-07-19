/*************************************************************************
> File Name: test_07.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月19日 星期四 23时36分14秒
> Description:   Array 类模板的完整的头文件
 ************************************************************************/

#ifndef ARRAY_H
#define ARRAY_H
#include<iostream>
using namespace std;

template<class elemType> class Array;
template<class elemType> ostream&
    operator<< (ostream&, const Array<elemType>&);

template<class elemType>
class Array{

public:
    explicit Array(int sz = DefaultArraySize){
        init(0, sz);
    }

    Array(const elemType* ar, int sz){
        init(ar, sz);
    }

    Array(const Array& iA){
        init(iA._ia, iA._size);
    }

    ~Array(){
        delete[] _ia;
    }

    Array& operator=(const Array&);
    int size() const{
        return _size;
    }

    elemType& operator[](int ix) const{
        return _ia[ix];
    }

    ostream& print(ostream& os = cout) const;
    void grow;
    void sort(int, int);
    int find(elemType);
    elemType min();
    elemType max();

private:
    void init(const elemType*, int);
    void swap(int, int);

    static const int DefaultArraySize = 12;
    int _size;
    elemType* _ia;
};
#endif


