/*************************************************************************
	> File Name: test_06.cpp
	> Author: yoghourt->ilvcr 
	> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
	> Created Time: 2018年07月15日 星期日 23时10分32秒
    > Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    Screen myScreen( 3, 3 ), bufScreen;

    myScreen.clear();
    myScreen.move( 2, 2 );
    myScreen.set( '*' );
    myScreen.display();

    bufScreen.reSize( 5, 5 );
    bufScreen.display();
}

Screen& Screen::display(){
    typdef string::size_type idx_type;

    for( idx_type ix=0; ix <_height; ++ix ){
        //针对每一行
        idx_type offset = _width * ix;
        for( idx_type iy=0; iy < _width; ++iy ){
            //针对每一列输出元素
            cout << _screen[offset + iy];
        }
        cout << endl;
    }

    return *this;
}

//Screen 的成员函数 resize()必须如下实现
// reSize() 的声明在类体内
Screen& Screen::reSize( int h, int w, char bkground ){
    // 把屏幕的大小设置到高度 h 和 宽度 w
    // 记住屏幕的内容
    string local( _screen );

    // 替换 _screen 所引用的字符串
    _screen.assign{  //赋值给字符串
        h * w;       //h * w个字符
        bkground     //值都是bkground
    };

    typedef string::size_type idx_type;
    idx_type local_pos = 0;

    // 把原来屏幕的内容拷贝到新的屏幕上
    for( idx_type ix=0; ix < _height; ++ix ){
        //每一行
        idx_type offset = w * ix;  //行位置
        
        for( idx_type iy=0; iy < _width; ++iy ){
            //每一列,赋以原来的值
            _screen[offset + iy] = local[local_pos++];
        }
    }

    _height = h;
    _width = w;

    return *this;
}


void Screen::copy( const Screen& sobj ){
    // 如果 Screen 对象与 sobj 是同一个对象
    // 无需拷贝
    if(this != &sobj){
        // 把 sobj 的值拷贝到 *this 中
    }
}


