/*************************************************************************
> File Name: test_04.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月19日 星期四 23时18分43秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

template<class Type>
class Queue{
    Queue() : front(0), back(0) {}
    ~Queue();
    Type remove();
    void add( const Type& );
    bool is_empty() const{
        return front == 0;
    }

private:
    QueueItem<Type>* front;
    QueueItem<Type>* back;
};

template<class type>
Queue<Type>::~Queue(){
    while(!is_empty){
        remova();
    }
}

//成员函数 Queue<Type>::add()在队尾加入了一个新项
template<class type>
void Queue<Type>::add( const Type& val){
    // 分配新的 QueueItem 对象
    QueueItem<Type>* pt = new QueueItem<Type>(val);

    if(is_empty()){
        front = back = pt;
    }
    else{
        back->next pt;
        back = pt;
    }
}



