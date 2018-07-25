/*************************************************************************
> File Name: array_right_rotation.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月25日 星期三 15时01分59秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    int n, k;
    cout << "ENter size of array=\t";
    cin >> n;
    cout << "Enter Number of indeces u want to rotate the array to left=\t";
    cin >> k;

    int a[n];
    cout << "Enter elements of array=\t";
    for(int i=0; i < n; i++){
        cin >> a[j];
    }
    int temp = 0;
    for(int i=0; i < k; i++){
        temp = a[n-1];
        for(int j=n-1; j >= 0; j--){
            if(j == 0){
                a[j] = temp;
            }
            else{
                a[j] = a[j-1];
            }
        }
    }
    cout << "Your rotated array is=\t";
    for(int i=0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}



