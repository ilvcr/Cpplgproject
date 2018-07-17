/*************************************************************************
> File Name: paranthesis_matching.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月17日 星期二 14时49分01秒
> Description: 
 ************************************************************************/

#include<iostream>
#include<stdlib.h>
#include<string.h>
#Include<stdio.h>
using namespace std;

char stack[100];
int top = 0;

void push(char ch){
    stack[top++] = ch;
}

char pop(){
    return stack[--top];
}

bool check(char x, char y){
    if((x =='('&&y==')') || (x == '{'&&y=='}') || (x=='[' && y==']') || (x=='<' && y=='>')){
        return true;
    }
    else{
        return false;
    }
}

int main(int argc, char* argv[]){

    char exp[100];
    cout << "Enter The Expression : ";
    gets(exp);
    for(int i=0; i < strlen(exp); i++){
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[' || exp[i]=='<'){
            push(exp[i]);
        }
        else if(exp[i]==')' || exp[i]=='}' || exp[i]==']' || exp[i]=='>'){
            if(!check(pop(), exp[i])){
                cout << "\nWrong Expression";
                exit;
            }
        }
    }

    if(top == 0){
        cout << "Correct Expression";
    }
    else{
        cout << "\nWrong Expression";
    }

    return 0;
}



