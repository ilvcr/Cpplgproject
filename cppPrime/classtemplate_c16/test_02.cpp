/*************************************************************************
> File Name: test_02.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月19日 星期四 23时06分28秒
> Description:   类模板 Queue 的定义, 其和类模板 QueueItem 的
                    定义都被放在一个名为 Queue.h的头文件
 ************************************************************************/

//Queue.h
// QueueItem 的声明

#ifndef QUEUE_H
#define QUEUE_H

// QueueItem 的声明
template<class T> class QueueItem;

template<class Type>
class Queue{
public:
    Queue() : front(0), back(0) {}
    ~Queue();
    type& remove();

    void add( const Type& );
    bool is_empty() const{
        return front == 0;
    }

private:
    QueueItem<Type>* front;
    QueueItem<Type>* back;
};

#endif


