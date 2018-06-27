/*************************************************************************
	> File Name: test_14.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月27日 星期三 13时39分43秒
    > Description:  Stack的原始定义
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

class iStack{

public:
    iStack( int capacity ) : _stack( capacity ), _top( 0 ) {}
    
    bool pop( int& value );

    bool push( int value );

    bool full();
    bool empty();
    void display();

    int size();

private:
    int _top;
    vector<int> _stack;
};

bool iStack::pop( int& top_value ){
    if( empty()){
        return false;
    }
    top_value = _stack.back();
    _stack.pop_back();
    return true;
}

bool iStack::push( int value ){
    if( full()){
        return false;
    }
    _stack.push_back( value );
    return true;
}

inline bool iStack::empty(){
    return _stack.empty();
}

inline int iStack::size(){
    return _stack.size();
}

inline bool iStack::full(){
    return _stack.max_size() == _stack.size();
}

void iStack::display(){
    cout << "( " << size() << " )( bot: ";
    for( int ix = 0; ix < size; ++ix ){
        cout << _stack[ix] << " ";
    }

    cout << " :top )\n";
}

inline iStack::iStack( int capacity ){
    if( capacity ){
        _stack.reserve( capacity );
    }
}


