/*************************************************************************
> File Name: longest_increasing_subsequence.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月21日 星期六 22时22分45秒
> Description:   Program to calculate length of longest increasing subsequence in an array
 ************************************************************************/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int LIS(int a[], int n){
    int lis[n];
    
    for(int i=0; i < n; ++i){
        lis[i] = i;
    }

    for(int i=0; i < n; ++i){
        for(int j=0; j < i; ++j){
            if(a[i] > a[j] && lis[i] < lis[j]+1){
                lis[i] = lis[j] + 1;
            }
        }
    }

    int res = 0;
    for(int i=0; i < n; ++i){
        res = max(res, lis[i]);
    }

    return res;
}

int main(int argc, char* argv[]){
    int n;

    cout << "Enter size of array: ";
    cin >> n;
    int a[n];
    cout << "Enter array elements: ";

    for(int i=0; i < n; ++i){
        cin >> a[i];
    }

    cout << LIS(a, n) <<endl;
    return 0;
}



