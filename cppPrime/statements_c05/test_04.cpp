/*************************************************************************
	> File Name: test_04.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月25日 星期一 13时41分21秒
    > Description: for 循环最普遍的用法是遍历一个定长的数据结构
                        如数组或 vector 向量
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int ia[10];
    for( int ix=0; ix<10; ++ix ){
        ia[ix] = ix;
    }

    vector<int> ivec( ia, ia+10 );
    vector<int>::iterator iter = iter.begin();

    for(; iter != ivec.end(); ++iter){
        *iter *= 2;
    }

    return 0;
}

inline void
ilist::
insert( ilist_item* ptr, int value ){
    if( !ptr ){
        insert_front( value );
    }
    else{
        bump_up_size();
        new ilist_item(value, ptr);
    }
}


inline void
ilist::
insert_front( int value ){
    ilist_item* ptr = new ilist_item( value );
    if( !_at_front ){
        _at_front = _at_end = ptr;
    }
    else{
        ptr->next( _at_front );
        _at_front = ptr;
    }
    bump_up_size();
}

inline void
ilist::
insert_end( int value ){
    if( !_at_end ){
        _at_end = _at_front = new ilist_item( value );
    }
    else{
     _at_end = new ilist_item( value, _at_end );
    }
    bump_up_size();
}

ilist_item*
ilist::
find( int value ){
    ilist_item* ptr = _at_front;

    while( ptr ){
        if( ptr->value() == value ){
            break;
        }
        ptr = ptr->next();
    }

    return ptr;
}


