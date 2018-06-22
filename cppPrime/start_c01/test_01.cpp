/*************************************************************************
	> File Name: test_01.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月21日 星期四 20时36分32秒
    > Description:  c++程序示例
 ************************************************************************/

#include<iostream>
using namespace std;

//哑函数声明
void read() { cout << "read()\n"; }
void sort() { cout << "sort()\n"; }
void compact() { cout << "compact()\n"; }
void write() { cout << "write()\n"; }

int main()
{
    read();
    sort();
    compact();
    write();
    
    return 0;
}
