/*************************************************************************
> File Name: test_08.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月15日 星期日 23时52分26秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

class Screen{
public:
    inline Screen& forward();
    inline Screen& back();
    inline Screen& end();
    inline Screen& up();
    inline Screen& down();

private:
    inline int row();
};

inline Screen& Screen::forward(){
    // 向前移动_cursor, 一个屏幕元素
    ++_cursor;

    //检查是否到达右下角, 若是则折回
    if(_cursor == _screen.size()){
        home();
    }

    return *this;
}

inline Screen& Screen::back(){
    // 向后移动 _cursor 一个屏幕元素
    // 检查是否到达左上角 若是则折回
    if(_cursor == 0){
        end();
    }
    else{
        --_cursor;
    }

    return *this;
}

inline Screen& Screen::end(){
    _cursor = _width * _height - 1;
    return *this;
}

const char BELL = '\007';

inline Screen& Screen::up(){
    // 移动 _cursor 向上一行
    // 不折回, 而是发出铃声
    if( row() == 1 ){
        cout << BELL << endl;
    }
    else{
        _cursor -= _width;
    }

    return *this;
}

inline Screen& Screen::dpwn(){
    if(row() == _height){
        cout << BELL << endl;
    }
    else{
        _cursor += _width;
    }

    return *this;
}

inline int Screen::row(){
    return (_cursor + _width) / _width;
}


