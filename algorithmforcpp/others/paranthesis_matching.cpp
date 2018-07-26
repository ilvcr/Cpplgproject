/*************************************************************************
> File Name: paranthesis_matching.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月26日 星期四 15时18分57秒
> Description: 
 ************************************************************************/

#include<iostream>
#include<stdlib>
#include<string>
#include<stdio.h>
using namespace std;

const int MAX = 100;

// -------------- stack --------------

char stack[MAX];
int top=0;

void push(char ch){
    stack[top++]=ch;
}

char pop(){
    return stack[--top];
}
-------------- end stack -----------

int main(int argc, char* argv[]){
    
    string exp;
    cout << "Enter The Expression : ";
    cin >> exp;
    for(int i=0; i < exp.length(); i++){
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[' || exp[i] == '<'){
            push(exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']' || exp[i] == '>'){
            pop();
        }
    }

    // makes sure the stack is empty after processsing (above)
    if(top == 0){
        cout << "Correct Expression";
    }
    else{
        cout << "\nWrong Expression";
    }

    return 0;
}



