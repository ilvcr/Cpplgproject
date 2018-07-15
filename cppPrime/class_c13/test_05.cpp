/*************************************************************************
> File Name: test_05.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月15日 星期日 22时04分49秒
> Description: 
 ************************************************************************/

#include<iostream>
#include"Screen.h"
using namespace std;

int main(int argc, char* argv[]){
    Screen sobj(3, 3);  
    string init("abcdefghi");
    cout << "Screen Object ("
         << sobj.height() << ", "
         << sobj.width() << ")\n\n";

    //设置屏幕内容
    string::size_type initpos = 0;
    for( int ix=1; ix <= sobj.width(); ++ix){
        for(int iy=1; iy <= sobj.height(); ++iy){
            sobj.move( ix, it );
            sobj.set( init[ initpos++ ]);
        }
    }

    //打印屏幕内容
    for( int ix=1; ix <= sobj.height(); ++iy ){
        for( int iy=1; iy <= sobj.height(); ++iy ){
            cout << sobj.get( ix, iy );
        }
        cout << "\n";
    }

    return 0;
}


