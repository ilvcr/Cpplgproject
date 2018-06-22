/*************************************************************************
	> File Name: test_06.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月22日 星期五 15时27分30秒
    > Description:  包含String类的定义
 ************************************************************************/

#include<iostream>
using namespace std;


//包含strcmp()函数的声明
//cstring是标准C库的头文件
#include<cstring>
bool                    //返回类型
String::                //说明这是String类的一个成员
operator==              //函数的名字:等于操作符
(const String& rhs)     //参数列表
{
    if( _size != rhs._size )
        return false;

    return strcmp( _string, rhs._string ) ? false : true;
}

//C style
inline bool
String::operator==( const char* s )
{
    return strcmp( _string, s ) ? false : true;
}


