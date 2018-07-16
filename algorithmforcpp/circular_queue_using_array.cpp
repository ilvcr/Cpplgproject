/*************************************************************************
> File Name: circular_queue_using_array.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月16日 星期一 13时28分43秒
> Description:   使用数组计算循环队列
 ************************************************************************/

#include<iostream>
using namespace std;

int qqueue[10];
int front = 0;
int rear = 0;
int count = 0;

void Enque(int x){
    if(count == 10){
        cout << "\nOverflow";
    }
    else{
        queue[rear] = x;
        rear = (rear+1)%10;
        count++;
    }
}

void Deque(){
    if(front == rear){
        cout << "\nUnderflow";
    }
    else{
        cout << "\n" << queue[front] << " deleted";
        front = (front+1)%10;
        count--;
    }
}

void show(){
    for(int i=0; i<count; i++){
        cout << queue[(i+front)%10] << "\t";
    }
}


int main(int argc, cahr* argv[]){
    int ch, x;
    do{
        cout << "\n1. Enque";
        cout << "\n2. Deque";
        cout << "\n3. Print";
        cout << "\nEnter Your Choice : ";
        cin >> ch;

        if(ch == 1){
            cout << "\nInsert : ";
            cin >> x;
            Enque(x);
        }
        else if(ch == 2){
            Deque();
        }
        else if(ch == 3){
            show();
        }
    }
    while(ch != 0);

    return 0;
}


