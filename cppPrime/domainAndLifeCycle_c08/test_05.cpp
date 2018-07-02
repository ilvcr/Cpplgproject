/*************************************************************************
	> File Name: test_05.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月02日 星期一 22时06分49秒
    > Description:
 ************************************************************************/

#include<iostream>
#include<new>
using namespace std;

const int chunk = 16;
class Foo{
public:
    int val(){
        return _val;
    }
    Foo(){
        _val = 0;
    }

private:
    int _val;
};

//预分配内存 但没有 Foo 对象
char *buf = new char[ sizeof(Foo)* chunk ];

int main(){
    //在 buf 中创建一个 Foo 对象
    Foo* pb = new (buf) Foo;

    //检查一个对象是否被放在 buf 中
    if( pb->val() == 0 ){
        cout << "new expression worked!" << endl;
    }

    delete[] buf;
    return 0;
}


