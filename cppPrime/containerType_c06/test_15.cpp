/*************************************************************************
	> File Name: test_15.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月27日 星期三 13时51分41秒
    > Description:  含有vector模板的stack类的定义
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

typedef Stack<int> iStack;

template< class elemType>
class Stack{

public:
    Stack( int capacity=0 );
    bool push( elemType value );
    bool full();
    bool empty();
    void display();
    int size();


private:
    vector<elemType> _stack;
};

