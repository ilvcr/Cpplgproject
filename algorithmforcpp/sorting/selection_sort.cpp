/*************************************************************************
> File Name: selection_sort.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月26日 星期四 22时47分40秒
> Description:   Selection Sort
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char* argv[]){

    int Array[6];
    cout << "\nEnter any 6 Numbers for Unsorted Array : ";

    //Input
    for(int i=0; i < 6; i++){
        cin >> Array[i];
    }

    //Selection Sorting
    for(int i=0; i < 6; i++){
        int min = i;
        for(int j=i+1; j < 6; j++){
            if(Array[j] < Array[min]){
                min = j;  //Finding the smallest number in Array
            }
        }
        int temp = Array[i];
        Array[i] = Array[min];
        Array[min] = temp;
    }

    //Output
    cout << "\nSorted Array : ";
    for(int i=0; i < 6; i++){
        cout << Array[i] << "\t";
    }

    return 0;
}


