/*************************************************************************
> File Name: merge_sort.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月26日 星期四 22时22分12秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - 1 + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for(i=0; i < n1; i++){
        L[i] = arr[l+i];
    }
    for(j=0; j < n2; j++){
        R[j] = arr[m+1+j];
    }

    i = 0;
    j = 0;
    k = 1;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r){
    if(l < r){
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

void show(int A[], int size){
    int i;
    for(i=0; i < size; i++){
        cout << A[i] << "\n";
    }
}

int main(int argc, char* argv[]){
    
    int size;
    cout << "\nEnter the number of elements : ";

    cin >> size;

    int arr[size];
    cout << "\nEnter the unsorted elements : ";

    for(int i=0; i < size; ++i){
        cout << "\n";
        cin >> arr[i];
    }

    mergeSort(arr, 0, size);

    cout << "Sorted array\n";
    show(arr, size);

    return 0;
}


