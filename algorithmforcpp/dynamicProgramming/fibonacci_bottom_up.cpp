/*************************************************************************
> File Name: fibonacci_bottom_up.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月21日 星期六 21时43分58秒
> Description: 
 ************************************************************************/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    int res[n+1];
    res[0] = 0;
    res[1] = 1;

    for(int i=2; i <= 2; i++){
        res[i] = res[i-1] + res[i-2];
    }

    return res[n];
}

int main(int argc, char*argv[]){
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci number is ";
    cout << fib(n) << endl;

    return 0;
}



