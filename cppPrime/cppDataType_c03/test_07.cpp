/*************************************************************************
	> File Name: test_07.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月22日 星期五 15时34分34秒
    > Description:  在一个或者多个实例中声明inline
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

//构造缺省函数
inline String::String()
{
    _size = 0;
    _string = 0;
}
inline String::String( const char* str )
{
    if( !str ){
        _size = 0;
        _string = 0;
    }
    else{
        _size = strlen( str );
        _string = new char[ _size + 1 ];
        strcpy( _string, str );
    }
}

//拷贝构造函数
inline String::String( const String& rhs )
{
    _size = rhs._size;
    if( !rhs._string ){
        _string = 0;
    }
    else{
        _string = new char[ _size + 1 ];
        strcpy( _string, rhs._string );
    }
}

//析构函数
inline String::~String()
{
    delete []_string;
}

//this指针的使用1
inline String&
String::operator=( const char* s )
{
    if( !s ){
        _size = 0;
        delete []_string;
        _string = 0;
    }
    else{
        _size = strlen( s );
        delete []_string;
        _string = new char[ _size + 1 ];
        strcpy( _string, s );
    }
    return *this;
}


//this指针的使用2 
inline String&
String::operator=( const String& rhs )
{
    if( this != &rhs ){
        delete []_string;
        _size = rhs._size;
        if( !rhs._string ){
            _string = 0;
        }
        else{
            _string = new char[ _size + 1 ];
            strcpy( _string, rhs._string );
        }
    }
    return *this;
}

//下标操作符
#include<cassert>

inline char&
String::operator[]( int elem )
{
    assert( elem >= 0 && elem < _size );
    return _string[ elem ];
}

//输入操作符
#include<iomanip>
inline istream&
operator>>( istream& io, String& s )
{
    //人工限制最多4096个字符
    const int limit_string_size = 4096;
    char inBuf[ limit_string_size ];

    //setw()是iostream库的一部分
    //限制被读取的字符个数为limit_string_size-1
    io >> setw( limit_string_size ) >> inBuf;
    s = inBuf;          //String::operator=( const char* )

    return io;
}


//输出操作符
inline ostream&
operator<<( ostream& os, String& s )
{
    return os << s.c_str();
}


