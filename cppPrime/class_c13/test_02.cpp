/*************************************************************************
	> File Name: test_02.cpp
	> Author: yoghourt->ilvcr 
	> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
	> Created Time: 2018年07月15日 星期日 10时41分23秒
    > Description: 
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Screen{
    string _screen;             //string( _height* _width)
    string::size_type _cursor;  //当前屏幕(Screen)位置
    short _height;              //行数
    short _width;               //列数
};

class StackScreen{
    int topStack;
    void (*handler)();          //函数的指针
    vector<Screen> stack;       //类的vector
};


