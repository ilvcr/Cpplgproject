/*************************************************************************
> File Name: test_02.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月18日 星期三 11时22分54秒
> Description: 
 ************************************************************************/

#include<iostream>

#include<cstring>
using namespace std;

inline String& String::operator+=(cosnt String& rhs){
    //如果rhs引用的String不为空
    if( rhs._string ){
        String tmp( *this );

        // 创建足够大的存储区
        // 以便包含被连接之后的 String
        _size += rhs._size;
        delete[] _string;
        _string = new char[ _size + 1 ];

        // 首先, 把原来的 String 拷贝到新的存储区中,
        // 然后附加上 rhs 所指的 String
        strcpy( _string, tmp._string );
        strcpy( _string + tmp._size, rhs._string );
    }

    return *this;
}


inline String& String::operator+=( const char* s){
    //如果s不是空指针
    if( s ){
        String tmp( *this );
        // 创建足够大的存储区
        // 以便包含被连接之后的 String
        _size += strlen( s );
        delete[] _string;
        _string = new char[size = 1]；

        // 首先把原来的 String 拷贝到新的存储区中
        // 然后, 附加上 s 所指的 C 风格字符串
        strcpy( _string, tmp._string );
        strcpy( _string + tmp._size, s );
    }

    return *this;
}


bool operator==( const String& str1, const String* str2 ){
    if( str1.size() != str2.size() ){
        return false;
    }

    return  strcmp( str1.c_str(), str2.c_str() ) ? false : true;
}


