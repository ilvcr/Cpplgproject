/*************************************************************************
> File Name: test_03.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月19日 星期四 23时13分02秒
> Description:   把Screen 类重新定义为模板,将它的高度height和宽度width 参数化
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

template<int hi, int wid>
class Screen{
public:
    Screen() : _height(hi), _width(wid), _cursor(0), _screen(hi*wid, '#') {}

    /..

private:
    string _screen;
    string::size _cursor;
    short _height;
    short _width;
};

typedef Screen<24, 80> termScreen;
termScreen hp2621;
Screen<8, 24> ancientDcreen;


