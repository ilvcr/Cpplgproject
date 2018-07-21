/*************************************************************************
> File Name: knapsack_0_1.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月21日 星期六 20时23分22秒
> Description:  0-1 Knapsack problem - Dynamic programming
 ************************************************************************/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


/*
void Print(int res[20][20], int i, int j, int capacity){
    if(i==0 || j==0){
        return;
    }
    if(res[i-1][j]==res[i][j-1]){
        if(i<=capacity){
            cout<<i<<" ";
        }
        
        Print(res, i-1, j-1, capacity-i);
    }
    else if(res[i-1][j]>res[i][j-1]){
        Print(res, i-1,j, capacity);
    }
    else if(res[i][j-1]>res[i-1][j]){
        Print(res, i,j-1, capacity);
    }
*/


int Knapsack(int capacity, int n, int weight[], int value[]){
    int res[20][20];
    for(int i=0; i < n+1; ++i){
        for(int j=0; j < capacity+1; ++j){
            if(i == 0 || j == 0){
                res[i][j] = 0;
            }
            else if(weight[i-1] <= j){
                res[i][j] = max(value[i-1]+res[i-1][j-weight[i-1]], res[i-1][j]);
            }
            else{
                res[i][j] = res[i-1][j];
            }
        }
    }
        //Print(res, n, capacity, capacity);
        //cout << "\n";
    
    return res[n][capacity];
}

int main(int argc, char* argc[]){
    int n;
    cout << "ENter number of items: ";
    cin >> n;
    int weight[n], value[n];
    
    cout << "Enter weights: ";
    for(int i=0; i < n; ++i){
        cin >> weight[i];
    }

    cout << "Enter values: ";
    for(int i=0; i < n; ++i){
        cin >> value[i];
    }

    int capacity;
    cout << "Enter capacity: ";
    cin >> capacity;
    cout << Knapsack(capacity, n, weight, value);
    return 0;
}
