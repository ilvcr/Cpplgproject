/*************************************************************************
> File Name: test_04.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月15日 星期日 21时57分50秒
> Description:   成员函数可直接访问它所属的类的成员，无需使用点或者肩头成员访问操作符
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

void Screen::copy( const Screen& sobj ){
    // 如果这个 Screen 对象与 sobj 是同一个对象, 则无需拷贝
    if( this != &sobj ){
        _height = sobj._height;
        _width = sobj._width;
        _cursor = 0;

        // 创建一个新字符串
        // 它的内容与 sobj._screen 相同
        _screen = sobj._screen;
    }
}


