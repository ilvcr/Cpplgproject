/*************************************************************************
> File Name: bubble_sort.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月26日 星期四 21时42分00秒
> Description:   Bubble sort
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    
    int n;
    cin >> n;
    int Array[n];
    cout << "\nEnter any 6 Numbers for Unsorted Array : ";

    //Input
    for(int i=0; i < n; i++){
        cin >> Array[i];
    }

    //Bubble Sorting
    for(int i=0; i < n; i++){
        for(int j=0; j < n-1; j++){
            if(Array[j] > Array[j+1]){
                int temp = Array[j];
                Array[j] = Array[j+1];
                Array[j+1] = temp;
            }
        }
    }

    //Output
    cout << "\nSorted Array : ";
    for(int i=0; i < n; i++){
        cout << Array[i] << "\t";
    }

    return 0;
}


