/*************************************************************************
> File Name: gcd_of_n_numbers.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月26日 星期四 15时10分52秒
> Description: This program aims at calculating the GCD of n numbers by division method
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    cout <<"Enter value of n:"<<endl;
    cin >> n;
    int a[n];
    int i,j,gcd;
    cout << "Enter the n numbers:" << endl;

    for(i=0; i < n; i++){
        cin >> a[i];
    }

    j = 1;  //to access all elements of the array starting from 1
    gcd = a[0];
    while(j < n){
        if(a[j] % gcd == 0){    //value of gcd is as needed so far
            j++;                //so we check for next element
        }
        else{
            gcd = a[j] % gcd;   //calculating GCD by division method
        }
    }

    cout << "GCD of entered n number:" << gcd;

    return 0;
}



