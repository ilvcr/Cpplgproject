/*************************************************************************
> File Name: test_01.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月19日 星期四 23时01分14秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;


template<class Type>
class Queue{
public:
    Queue();
    ~Queue();

    Type& remove();
    void add( const Type& );

    bool is_empty();
    bool is_full();

private:
    //...
};


template<class Type>
class QueueItem{
public:
    QueueItem( const Type& );

private:
    Type item;
    QueueItem* next;
};



