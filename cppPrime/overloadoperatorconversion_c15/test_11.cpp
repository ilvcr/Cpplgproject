/*************************************************************************
> File Name: test_11.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月18日 星期三 13时40分04秒
> Description: 
 ************************************************************************/

#include<iostream>
#include"SmallInt.h"
using namespace std;

typedef char* tName;
class Token{
public:
    Token(char*, int);
    operator SmallInt(){ return val; }
    operator tName(){ return name; }
    opertor int(){ return val; }
    //,,,

private:
    SmallInt val;
    char* name;
};

void print(int i){
    cout << "print( int ) : " << i << endl;
}

Token t1( "integer constant", 127 );
Token t2( "friend", 255 );

int main(int argc, char* argv[]){
    print( t1 ); // t1.operator int()
    print( t2 ); // t2.operator int()
    return 0;
}


