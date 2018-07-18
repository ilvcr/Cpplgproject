/*************************************************************************
> File Name: test_09.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月18日 星期三 13时24分02秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

class SmallInt{
    friend operator+( const SmallInt &, int );
    friend operator- ( const SmallInt &, int );
    friend operator- ( int, const SmallInt & );
    friend operator+( int, const SmallInt & );

public:
    SmallInt(int val) : value(ival){}
    operator+(const SmallInt&);
    operator-(const SmallInt&);
    //....
private:
    int value;
};


SmallInt si1, si2;
int main(int argc, char*argv[]){

    cout << "enter a SmallInt, please: ";
    while(cin >> si1){
        cout << "The value read is " << si1 << "\nIt is ";

    // SmallInt::operator int() 被调用两次
    cout << ( ( si1 > 127 ) ? "greater than " : ( ( si1 < 127 ) 
                ? "less than " : "equal to ") ) << "127\n";

    cout << "\nenter a SmallInt, please (ctrl-d to exit): ";
    }
    cout << "bye now\n";
}


