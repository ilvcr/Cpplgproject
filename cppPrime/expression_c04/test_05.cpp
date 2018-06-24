/*************************************************************************
	> File Name: test_05.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月24日 星期日 23时46分34秒
    > Description: 用来练习 sizeof()操作符
 ************************************************************************/

#include<iostream>
#include<string>
#include<cstddef>
using namespace std;

int main()
{
    size_t ia;
    ia = sizeof(ia);        //ok
    ia = sizeof ia;
    ia = sizeof(int);

    int *pi = new int[12];

    cout << "pi:" << sizeof(pi) << " *pi: " << sizeof(*pi) << endl;

    //一个string的大小与它指向的字符串的长度无关
    string st1("foobar");
    string st2("a might oak");
    string *ps = &st1;

    cout << "st1: " << sizeof(st1)
        << " st2: " << sizeof(st2)
        << " ps: " << sizeof(ps)
        << " *ps " << sizeof(*ps)
        <<endl;

    cout << "short :\t\t" << sizeof(short) << endl;
    cout << "short* :\t" << sizeof(short*) << endl;
    cout << "short& :\t" << sizeof(short&) <<endl;
    cout << "short[3] :\t" << sizeof(short[3]) << endl;

    return 0;
}


