/*************************************************************************
> File Name: decimal_to_binary.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月16日 星期一 13时51分35秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char* rgv[]){
    int << number;
    cin >> number;

    int remainder, binary = 0, var = 1;

    do{
        remainder = number % 2;
        number /= 2;
        binary = binary + (remainder * var);
        var *= 10;
    }
    while(number>0);
    
    cout << binary;
}


