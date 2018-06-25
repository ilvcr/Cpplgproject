/*************************************************************************
	> File Name: test_08.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月25日 星期一 15时19分02秒
    > Description:  list_item类模板
 ************************************************************************/

#include<iostream>
using namespace std;

template<class elemType>
class list_item{
public:
    list_item( elemType value, list_item* item = 0 )
    : _value( value ){
        if( !item ){
            _next = 0;
        }
        else{
            _next = item->_next;
            item->_next = this;
        }
    }

    elemType value() { return _value; }
    list_item* next() { return _next; }
    void next(list_item* link) { _next = link; }
    void value( elemType new_value ) { _value = new_value; }

private:
    elemType _value;
    list_item* _next;
};


