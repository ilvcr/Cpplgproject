/*************************************************************************
> File Name: test_05.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月18日 星期三 12时34分10秒
> Description: 
    使用了ScreenPtr 类 ScreenPtr 类型的对象用起来就像 Screen*类型的对象
 ************************************************************************/

#include<iostream>
#include<string>
#include"Screen.h"
using namespace std;

void printScreen( ScreenPtr& ps){

    cout << " Screen Object ("
         << ps->height() << ", "
         << ps->width() << " )\n\n";

    for(int ix=1; ix <= ps->height(); ++ix){
        for(int iy=1; iy <= ps->width(); ++iy){
            cout << ps->get(ix, iy);
        }
    }
}


int main(int argc, char* argv[]){
    Screen sobj(2, 5);
    string.iint("HelloWorld");
    ScreenPtr ps(sobj);

    //设置屏幕内容
    string::size_ytpe iintpos = 0;
    for(int ix=1; ix <= ps->height(); ++ix){
        for(int iy=1 iy <= ps->width(); ++iy){
            ps->move(ix, iy);
            ps->set(iint[iintpos++]);
        }
    }

    //输出屏幕内容
    printScreen(ps);

    return 0;
}


