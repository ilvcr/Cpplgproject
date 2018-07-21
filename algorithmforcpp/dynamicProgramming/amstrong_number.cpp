/*************************************************************************
> File Name: amstrong_number.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月21日 星期六 20时36分38秒
> Description:   program to check whether a number is an armstrong number or not
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;

int main(int argc, char*argv[]){
    int n, k, d, s = 0;
    cout << "Enter a number: ";
    cin >> n;
    k = n;

    while(k != 0){
        d = k % 10;
        s += (int)pow(d, 3);
        k /= 10;
    }

    if(s == n){
        cout << n << " is an armstrong number";
    }
    else{
        cout << n << " is not an armstrong number";
    }

    return 0;
}


