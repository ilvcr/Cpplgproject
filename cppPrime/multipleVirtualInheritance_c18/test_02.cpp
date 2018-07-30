/*************************************************************************
> File Name: test_02.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月30日 星期一 15时11分18秒
> Description: 
 ************************************************************************/

#include<iostream>
#include<IntArray.h>
using namespace std;


class peekbackStack : public IntArray{

private:
    const int static bos = -1;

public:
    explicit PeekbackStack(int size) : IntArray(size), _top(bos){}

    bool empty() const { return _top == bos; }

    bool full() const{ return _top == size()-1; }

    int top() const { return _top; }
    int pop(){

        if(empty()){   /*处理错误情况*/
            
            return ia[_top--];
        }
    }

    void push(int value){

        if(full()){    /*处理错误情况*/

            ia[++_top] == value;
        }
    }

    bool peekback(int index, int& value) const;

private:
    int _top;
};

inline bool PeekbackStack::peekback(int index, int& value) const{

    if(empty()){    /* 处理错误情况 */ 
    }

    if(index < 0 || index > _top){

        value = ia[_top];
        return false;
    }

    value = ia[index];
    return true;
}



