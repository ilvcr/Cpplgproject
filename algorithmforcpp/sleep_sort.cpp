/*************************************************************************
> File Name: sleep_sort.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月17日 星期二 22时01分39秒
> Description: 
 ************************************************************************/

#include<iostream>
#include<stdio.h>
#include<windows.h>
#include<process.h>
using namespace std;

void routine(void* a){
    int n = *(int*) a;  //typecasting from void to int

    // Sleeping time is proportional to the number
    // More precisely this thread sleep for 'n' milliseconds
    Sleep(n);

    //After the sleep, print the number
    printf("%d", n);
}


void sleepSort(int* arr, int n){
    // An array of threads, one for each of the elements
    // in the input array
    HANDLE threads[n];

    //Create the threads for each of the input array elements
    for(int i=0; i < n; i++){
        threads[i] = (HANDLE)_beginthread(&routine, 0, &arr[i]);
    }
    //Process these threads
    waitForMultipleObjects(n, threads, TRUE, INFINITE);

    return;
}


// Driver program to test above functions
int main(int argc, cahr* argv[]){
    // Doesn't work for negative numbers
    int arr[] = {34, 23, 122, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    sleepSort(arr, n);

    return 0;
}


