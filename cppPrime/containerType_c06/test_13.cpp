/*************************************************************************
	> File Name: test_13.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月27日 星期三 13时31分09秒
    > Description:
                    操作        功能 
                    empty()     如果栈为空,则返回 true 否则返回 false
                    size()      返回栈中元素的个数
                    pop()       删除, 但不返回栈顶元素
                    top()       返回, 但不删除栈顶元素
                    push(item)  放入新的栈顶元素
************************************************************************/

#include<iostream>
#include<stack>
using namespace std;


int main(){
    const int ia_size = 10;
    int ia[ia_size] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    //填充stack
    int ix = 0;
    stack<int> intStack;
    for(; ix < ia_size; ++ix){
        intStack.push(ia[ix]);
    }

    int error_cnt = 0;
    if(intStack.size() != ia_size){
        cerr << "oops! invalid intStack size: "
            << intStack.size() << "\t expected: " << ia_size << endl;
        ++error_cnt;
    }

    int value;
    while( intStack.empty() == false ){
        //读取栈顶元素
        value = intStack.top();
        if( value != --ix ){
            cerr << "oops! expected " << ix << " received " << value << endl;
            ++error_cnt;
        }

        //弹出栈顶元素并重复
        intStack.pop();
    }

    cout << " Our program ran with " << error_cnt << " errors! " << endl;
}



