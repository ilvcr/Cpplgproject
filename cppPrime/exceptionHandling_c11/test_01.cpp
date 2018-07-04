/*************************************************************************
	> File Name: test_01.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月04日 星期三 11时16分06秒
    > Description:  iStack的定义
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;


class iStack{
public:
    iStack( int capacity ) : _stack( capacity ), _top( 0 ) {  }
    bool pop( int& top_value );
    bool push( int value );
    bool full();
    bool empty();
    void display();
    int size();

private:
    int _top;
    vector<int> _stack;
};

void iStack::pop( int& top_value ){
    if( empty() ){
        throw popOnEmpty();
    }

    top_value = _stack[ --_top ];

    cout << " iStack::pop(): " << top_value <<endl;
}

void iStack::push( int value ){
    cout << " iStack::push( " << value << " ) \n";

    if( full() ){
        throw pushOnFull();
    }

    stack[ _top++ ] = value;
}

int main(){
    iStack stack( 32 );
    stack.display();

    for( int ix = 1; ix < 51; ++ix ){
        if( ix % 3 == 0 ){
            stack.push( ix );
        }
        if( ix % 4 == 0 ){
            stack.display();
        }
        if( ix % 10 == 0 ){
            int dummy;
            stack.pop( dummy );
            stack.display();
        }
    }

    return 0;
}


