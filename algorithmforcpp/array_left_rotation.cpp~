/*************************************************************************
	> File Name: array_left_rotation.cpp
	> Author: yoghourt->ilvcr 
	> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
	> Created Time: 2018年07月15日 星期日 14时23分54秒
    > Description: array left rotation  ->  数组左旋    实现
 ************************************************************************/

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int n, k;
    cout << "Enter size of array =\t";
    cin >> n;
    cout << "Enter number od indeces u want to rotate the array to left =\t";
    cin >> k;

    int a[n];
    cout << "Enter elements of array =\t";

    for(int i=0;i<n; i++){
        cin >> a[i];
    }

    int temp = 0;
    for(int i=0;i<k;i++){
        temp = a[0];
        for(int j=0;j<n;j++){
            if(j==n-1){
            a[n-1] = temp;
            }
            else{
                a[j] = a[j+1];
            }
        }
    }

    cout << "\n" << "Your rotated arrar is =\t" ;
    for(int j=0;j<n;j++){
        cout << a[j] << " ";
    }
    cout << "\n";
    getchar();

    return 0;
}
