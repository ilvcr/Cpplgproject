/*************************************************************************
	> File Name: test_09.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月25日 星期一 15时24分43秒
    > Description:  ilist 到 list 模板类的转换以类似的方式进行
 ************************************************************************/

#include<iostream>
using namespace std;

template<class elemType>
class list{
public:
    list()
    : _at_front( 0 ), _at_end( 0 ), _current( 0 ), _size( 0 ) {}

    list( const list& );
    list& operator=( const list& );
    ~list() { remove_all(); }

    void insert( list_item<elemType> *ptr, elemType Value );
    void insert_end( elemType value );
    void insert_front( elemType Value );
    void insert_all( const list& rhs );
    int remove( elemType value );
    void remove_front();
    void remove_all();

    list_item<elemType> *find( elemType value );
    list_item<elemType>* next_iter();
    list_item<elemType>* init_iter( list_item<elemType>* it );

    void display( ostream& os = cout );
    void concat( const list& );
    void reverse();
    int size() { return _size; }


private:
    void bump_up_size() { ++_size; }
    void bump_down_size() { --_size; }

    list_item<elemType>* _at_front;
    list_item<elemType>* _at_end;
    list_item<elemType>* _current;
    
    int _size;
};


