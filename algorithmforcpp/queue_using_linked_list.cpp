/*************************************************************************
> File Name: queue_using_linked_list.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月17日 星期二 15时51分11秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

struct node{
    int val;
    node* next;
};

node* front, *rear;

void Enque(int x){
    if(rear == NULL){
        node* n = new node;
        n->val = x;
        n->next = NULL;
        rear = n;
        front = n;
    }
    else{
        node* n = new node;
        n->val = x;
        n->next = NULL;
        rear = n;
    }
}

void Deque(){
    if(rear == front){
        cout << "\nUnderflow";
    }
    else{
        node* t = front;
        cout << "\n" << t->val << " deleted";
        front = front->next;
        delete t;
    }
}

void show(){
    node* t = front;
    while(t != NULL){
        cout << t->val << "\t";
        t = t->next;
    }
}

int main(int argc, char*argv[]){
    int ch, x;
    do{
        cout << "\n1. Enque";
        cout << "\n2. Deque";
        cout << "\n3. Print";
        cout << "\nEnter Your Choice : ";
        cin >> ch;

        if (ch==1){
            cout << "\nInsert : ";
            cin >> x;
            Enque(x);
        }
        else if (ch==2){
            Deque();
        }
        else if (ch==3){
            show();
        }
    }
    while(ch != 0);

    return 0;
}



