/*************************************************************************
> File Name: test_06.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月19日 星期四 23时30分22秒
> Description: 
 ************************************************************************/

#include<iostream>
#include"Queue.h"
using namespace std;

int main(){

    // Queue<int> 类被实例化
    // new 表达式要求 Queue<int> 必须被定义
    Queue<int>* p_qi = new Queue<int>;
    int ival;
    for(ival=0; ival < 10; ++ival){
        // 成员函数 add() 被实例化
        p_qi->add(ival);
    }

    int err_cnt = 0;
    for(ival=0; ival < 10; ++ival){
        // 成员函数 remove() 被实例化
        int qval = p_qi->remove();
        if(ival != qval){
            err_cnt++;
        }
    }

    if(!err_cnt){
        cout << "!! queue executed ok\n";
    }
    else{
        cerr << "?? queue errors: " << err_cnt << endl;
    }

    return 0;
}



