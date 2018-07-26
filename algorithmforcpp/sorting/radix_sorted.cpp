/*************************************************************************
> File Name: radix_sorted.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月26日 星期四 22时39分26秒
> Description: 
 ************************************************************************/

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>
using namespace std;

void radixsort(int a[], int n){
    int count[10];
    int output[n];
    memset(output, 0, sizeof(output));
    memset(count, 0, sizeof(count));
    int max = 0;

    for(int i=0; i < n; ++i){
        if(a[i] > max){
            max = a[i];
        }
    }
    int maxdigits = 0;
    while(max){
        maxdigits++;
        max /= 10;
    }
    for(int j=0; j < maxdigits; j++){
        for(int i=0; i < n; i++){
            int t = pow(10, j);
            count[(a[i]%(10*t))/t]++;
        }
        int k = 0;
        for(int p=0; p<10; p++){
            for(int i=0;i<n;i++){
                int t = pow(10,j);
                if((a[i]%(10*t))/t==p){
                    output[k] = a[i];
                    k++;
                }
            }
        }
        memset(count, 0, sizeof(count));
        for(int i=0; i < n; ++i){
            a[i] = output[i];
        }
    }
}

void print(int a[], int n){
    for(int i=0; i < n; ++i){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main(int argc, char* argv[]){

    int a[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(n) / sizeof(a[0]);
    radixsort(a, n);
    print(a, n);
    return 0;
}



