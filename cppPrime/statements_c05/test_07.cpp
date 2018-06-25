/*************************************************************************
	> File Name: test_07.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月25日 星期一 14时57分43秒
    > Description:  ilist类的方法
 ************************************************************************/

#include<iostream>
using namespace std;

/*
拷贝构造函数
拷贝赋值函数
*/

ilist::ilist( const ilist& rhs ){
    ilist_item* ptr = rhs._at_front;

    while( pt ){
        insert_end( pt->value() );
        pt = pt->next();
    }
}

void 
ilist::insert_all( const ilist& rhs ){
    ilist_item* ptr = rhs._at_front;

    while( pt ){
        insert_end( pt->value() );
        pt = pt->next();
    }
}

inline 
ilist::ilist( const ilist& rhs )
:_at_front( 0 ), _at_end( 0 )

inline ilist&
ilist::operator=( const ilist&rhs ){
    if( this != &rhs ){
        remove_all();
        insert_all( rhs );
    }

    return *this;
}

int main(){
    ilist mylist;
    
    for( int ix=0; ix<10; ++ix ){
        mylist.insert_front( ix );
        mylist.insert_end( ix );
    }

    cout << "\n" << "Use of init_iter() and next_iter() "
        <<" to iterate across each list item:\n";
    ilist_item* iter;
    
    for( iter =mylist.init_iter(); iter; iter = mylist.next_iter() ){
        cout << iter->value() << " ";
    }

    cout << "\n" << "Use of copy constructor\n";
    ilist mylist2( mylist );
    mylist.remove_all();

    for(iter = mylist2.init_iter();iter;iter = mylist2.next_iter()){
        cout << iter->value() << "";
    }

    cout << "\n" << "Use of copy assignment operator\n";
    mylist = mylist2;

    for( iter = mylist.init_iter(); iter; iter = mylist.next_iter() ){
        cout << iter->value() << " ";
    }
    cout << "\n";

    return 0;
}


