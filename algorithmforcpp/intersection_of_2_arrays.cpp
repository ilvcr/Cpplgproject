/*************************************************************************
> File Name: intersection_of_2_arrays.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月16日 星期一 14时49分41秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    int j, i, m, n;
    cout << "Enter size of array 1: ";
    cin >> m;
    cout << "Enter size of array 2: ";
    cin >> n;

    int a[m];
    int b[n];

    cout << "Enter elements of array 1: ";
    for(i=0; i < m; i++){
        cin >> a[i];
    }
    for(i=0; i < n; i++){
        cin >> b[i];
    }

    i = 0;
    j = 0;

    while((i < m) && (j < n)){
        if(a[i] < b[j]){
            i++;
        }
        else if(a[i] > b[j]){
            j++
        }
        else{
            cout << a[i++] << " ";
            j++;
        }
    }

    return 0;
}


