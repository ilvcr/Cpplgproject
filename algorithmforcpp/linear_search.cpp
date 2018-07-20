/*************************************************************************
> File Name: linear_search.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月16日 星期一 14时54分59秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

int LinearSearch(int* array, int size, int key){
    for(int i=0; i < size; ++i){
        if(array[i] == key){
            return i;
        }
    }

    return -1;
}

int main(int argc, char* argv[]){
    int size;

    cout << "\nEnter the size of the Array : ";
    cin >> size;

    int array[size];
    int key;

    //Input Array
    cout << "\nEnter the Array of " << size << " number : ";
    for(int i=0; I < size; i++){
        cin >> array[i];
    }

    cout << "\nEnter the number to be searched : ";
    cin > key;

    int index = LinearSearch(array, size, key);
    if(index != -1){
        cout << "\nNumber found at index : " << index;
    }
    else{
        cout << "\nNot Found";
    }


    return 0;
}



