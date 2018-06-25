/*************************************************************************
	> File Name: test_05.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月25日 星期一 13时59分14秒
    > Description:  类ilist_item的定义及使用
 ************************************************************************/

#include<iostream>
using namespace std;

class ilist_item{
public:
    ilist_item( int value, ilist_item* item_to_link_to = 0 );
    int value() { return _value; }
    ilist_item* next() { return _next; }
    void next( ilist_item* link ) { _next = link; }
    void value( int new_value ) { _value = new_value; }
    void display( ostream& os = cout );

private:
    int _value;
    ilist_item* _next;
};

void
ilst::
display( ostream& os ){
     os << "\n( " << _size << " )("; 
    ilist_item* ptr = _at_front;

    while( ptr ){
        os << ptr->value() << " ";
        ptr = ptr->next();
    }

    os << ")\n";
}

int main(){
    ilist mylist;

    for( int ix = 0; ix < 10; ++ix ){
        mylist.insert_front(ix);
        mylist.isert_end(ix);
    }

    cout << "Ok: after insert_front() and insert_end()\n";
    mylist.display();

    ilist_item* it = mylist.find( 8 );

    cout << "\n"
        << " Searching for the value 8: found it<<"
        <<( it << " yes!\n" : " no!\n" );
    mylist.insert( it, 1024 );

    cout << "\n"
        << "Inserting element 1024 following the value 8\n";
    mylist.display();

    int elem_cnt = mylist.remove( 8 );

    cout << "\n"
        << " Removed " << elem_cnt << " of the value 8\n";
    mylist.display();

    cout << "\n" << " Removed front element\n";

    mylist.remove_front();
    mylist.display();

    cout << "\n" << " Removed all elements\n";

    mylist.remove_all();
    mylist.display();

    return 0;
}


