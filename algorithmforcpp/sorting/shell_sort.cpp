/*************************************************************************
> File Name: shell_sort.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月26日 星期四 22时51分55秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char* argv[]){

    int size = 10;
    int array[size];

    //Input
    cout << "\nHow many numbers do want to enter in unsorted array : ";
    cin >> size;
    cout << "\nEnter the numbers for unsorted array : ";

    for(int i=0; i < size; i++){
        cin >> array[i];
    }

    //Sorting
    for(int i=size/2; i > 0; i=i/2){
        for(int j=i; j < size; j++){
            for(int k=j-i; k >= 0; k=k-i){
                if(array[k] < array[k+i]){
                    break;
                }
                else{
                    int temp = array[k+i];
                    array[k+i] = array[k];
                    array[k] = temp;
                }
            }
        }
    }

    //Output
    cout << "\nSorted array : ";
    for(int i=0; i < size; ++i){
        cout << array[i] << "\t";
    }

    return 0;
}



