/*************************************************************************
> File Name: insertion_sort.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月26日 星期四 22时17分38秒
> Description:   Insertion Sort
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char* argv[]){

    int n;
    int Array[n];
    cout << "\nEnter any 6 Numbers for Usorted Array : ";

    //Input
    for(int i=0; i < n; i++){
        cin >> Array[i];
    }

    //Sorting
    for(int i=1; i < n; i++){
        int temp = Array[i];
        int j = i-1;
        while(j >= 0 && temp < Array[j]){
            Array[j+1] = Array[j];
            j--;
        }
        Array[j+1] = temp;
    }

    //Output
    cout << "\nSorted Array : ";
    for(int i=0; i < n; i++){
        cout << Array[i] << "\t";
    }

    return 0;
}



