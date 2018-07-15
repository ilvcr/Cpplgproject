/*************************************************************************
	> File Name: test_03.cpp
	> Author: yoghourt->ilvcr 
	> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
	> Created Time: 2018年07月15日 星期日 10时45分46秒
    > Description: 
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class Screen{
public:
        //成员函数

private:
    string               _screen;
    string::size_type    _cursor;
    short                _height;
    short                _width;
};

bool isEqual( Screen& s1, Screen* s2 ){
    //如果不想等返回false, 相等则返回true
    if( s1.height() != s2->height() || s1.width() != s2->width()){
        return false;
    }

    for( int ix = 0; ix < s1.height(); ++ix ){
        for( int jy = 0; jy < s2->width(); ++jy ){
            if( s1.get( ix, jy ) != s2->get( ix, jy )){
                return false;
            }
        }
    }

    return true;
}


