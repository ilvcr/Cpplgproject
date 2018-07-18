/*************************************************************************
> File Name: test_03.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月18日 星期三 12时09分46秒
> Description: 
 ************************************************************************/

#include<iostream>
#include<cassert>
using namespace std;

class String{
public:
    //char* 的赋值操作符
    String& operator=( cosnt char* );
    //....
private:
    int _size;
    char* _string;
};

String& String::operator=( const char* sobj ){
    //sobj是个空指针
    if(!sobj){
        _size = 0;
        delete[] _string;
        _string = 0;
    }
    else{
        _size = strlen(sobj);
        delete[] _string;
        _string = new char[ _size + 1];
        strcpy( _string, sobj );
    }

    return *this;
}


inline char& String::operator[]( int elem ) const{
    assert( elem >=0 && elem < _size);
    return _string[elem];
}


