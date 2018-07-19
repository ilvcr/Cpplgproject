/*************************************************************************
> File Name: test_05.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月19日 星期四 23时26分34秒
> Description:  成员函数 Queue<Type>::remove()返回在队首的项 且相关的 QueueItem 对象被删除
 ************************************************************************/

#include<iostream>
using namespace std;

#include<cstdlib>

template<class Type>
Type Queue<Type>::remove(){
    if(is_empty()){
        cerr << "remove() on empty queue \n";
        exit(-1);
    }
    QueueItem<Type>* pt = front;
    front = front->next;
    Type retval = pt->item;

    delete pt;
    return retval;
}


