/*************************************************************************
> File Name: array_right_rotation.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月15日 星期日 14时40分17秒
> Description: array right rotation  ->  数组右旋     (实现)
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
    int n, k;
    cout << "Enter size of array = \t";
    cin >> n;
    cout << "Enter Number of indices u want to rotate the array to right =\t";
    cin >> k;

    int a[n];
    cout << "Enter elements of array =\t";
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int temp = 0;

    for(int i=0;i<k;i++){
        temp = a[n-1];
        for(int j=n-1;j>=0;j--){
            if(j==0){
                a[j] = temp;
            }
            else{
                a[j] = a[j-1];
            }
        }
    }

    cout << "\n" <<  "Your rotated array is =\t";

    for(int i=0;i<n;i++){
        cout << a[j] << " ";
    }
    cout << "\n";

    return 0;
}


