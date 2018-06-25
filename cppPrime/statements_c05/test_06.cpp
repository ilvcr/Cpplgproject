/*************************************************************************
	> File Name: test_06.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月25日 星期一 14时19分55秒
    > Description:  支持如同从链表中操作数据的操作
 ************************************************************************/

#include<iostream>
using namespace std;

/*
void remove_front();
void remove_all();
int remova( int value );
void concat( const ilist& il );
void reverse();
*/


inline void
ilist::remove_front(){
    if( _at_front ){
        ilist_item* ptr = _at_front;
        _at_front = _at_front->next;
        bump_down_size();

        delete ptr;
    }
}

void 
ilist::remove_all(){
    while( _at_front ){
        remove_front();
    }

    _size = 0;
    _at_front = _at_end = 0;
}

int
ilist::remove( int value ){
    ilist_item* plist = at_front;
    int elem_cnt = 0;

    while( plist && plist->value() == value ){
        plist = plist->next();
        remove_front();
        ++elem_cnt;
    }

    if( !plist ){
        return elem_cnt;
    }
    ilist_item* prev = plist;
    plist = plist->next;

    while( plist ){
        if( plist->value() == value ){
            prev->next( plist->next() );
            delete plist;
            ++elem_cnt;
            bump_down_size();
            plist = prev->next();
            if( !plist ){
                _at_end = prev;
                return elem_cnt;
            }
        }
        else{
            prev = plist;
            plist = plist->next();
        }
    }
    return elem_cnt;
}


void
ilist::concat( const ilist& il ){
    ilist_item* ptr = il._at_front;

    while( ptr ){
        insert_end( ptr->value() );
        ptr = ptr->next();
    }
}

void ilist::reverse(){
    ilist_item* ptr = _at_front;
    ilist_item* prev = 0;

    _at_front = _at_end;
    _at_end = ptr;

    while( ptr != _at_front ){
        ilist_item* tmp = ptr->next();
        ptr->next( prev );
        prev = ptr;
        ptr = tmp;
    }
    _at_front->next( prev );
}

int main(){
    ilist mylist;

    for( int ix = 0;ix < 10; ++ix ){
        mylist.insert_front( ix );
    }
    mylist.display();

    cout << "\n" << "reverse the list\n";
    mylist.reverse();
    mylist.display();

    ilist mylist_too;
    mylist_too.insert_end( 0 );
    mylist_too.insert_end( 1 );
    mylist_too.insert_end( 2 );
    mylist_too.insert_end( 3 );
    mylist_too.insert_end( 4 );
    mylist_too.insert_end( 5 );

    cout << "\n" << "mylist_too:\n";
    mylist_too.display();
    mylist.concat(mylist_too);

    cout << "\n" << "mylist after concat with mylist_too:\n";
    mylist.display();

    return 0;
}


