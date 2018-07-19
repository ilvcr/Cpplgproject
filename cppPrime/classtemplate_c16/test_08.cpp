/*************************************************************************
> File Name: test_08.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月19日 星期四 23时46分24秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

template<class elemType>
void Array<elemType>::init(const elemType* array, int sz){
    _size = sz;
    _ia = new elemType[_size];

    for(int ix=0; ix < _size; ++ix){
        if(!array){
            _ia[ix] = 0;
        }
        else{
            _ia[ix] = array[ix];
        }
    }
}


template<class elemType>Array<elemType>&
Array<elemType>::operator=(const Array<elemType>& A){

    if(this != &iA){
        delete[] _ia;
        init(iA._ia, iA._size);
    }

    return *this;
}


template<class elemType>ostream&
operator<< (ostream& os, const Array<elemType>& ar){
    return ar.print(os);
}

template<class elemType>
ostream& Array<elemType>::print(ostream& os) const{
    const int lineLength = 12;
    os << "( " << _size << ")< ";

    for(int ix=0; ix < _size; ++ix){
        if(ix%lineLength == 0 && ix){
            os << "\n\t";
        }
        os << _ia[ix];
        
        // 对于一行的最后一个元素 或者数组的
        // 最后一个元素不产生逗号
        if(ix%lineLength != lineLength-1 && ix != _size-1){
            os << ", ";
        }
    }
    os << " >\n";
    return os;
}





