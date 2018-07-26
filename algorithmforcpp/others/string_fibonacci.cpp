/*************************************************************************
> File Name: string_fibonacci.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月26日 星期四 15时42分28秒
> Description: 
    //This Programme returns the Nth fibonacci as a string.
    //The method used is manual addition with carry and placing it in a string which is called string addition
    //This makes it have no bounds or limits
 ************************************************************************/

#include<string>
#include<iostream>
using namespace std;


string add(string a, string b){
    string temp = "";

    //carry flag
    int carry = 0;

    //fills up with zeros
    while((int)a.length() < (int)b.length()){
        a = "0" + a;
    }

    //fills up with zeros
    while((int)b.length() < (int)a.length()){
        b = "0" + b;
    }

    //adds the numbers a and b
    for(int i=a.length()-1; i >= 0; i--){
        char val = (char)(((a[i]-48) + (b[i] - 48)) + 48 + carry);
        if(val > 57){
            carry = 1;
            val -= 10;
        }
        else{
            carry = 0;
        }
        temp = val + temp;
    }

    // processes the carry flag
    if(carry == 1){
        temp = "1" + temp;
    }

    //removes leading zeros.
    while(temp[0] == '0' && temp.length() > 1){
        temp = temp.substr(1);
    }

    return temp;
}

void fib_Accurate(long long n){
    string tmp = "";
    string fibMinus1 = "1";
    string fibMinus2 = "0";
    for(long long i=0; i < n; i++){
        tmp = add(fibMinus1, fibMinus2);
        fibMinus2 = fibMinus1;
        fibMinus1 = temp;
    }
    cout << fibMinus2;
}

int main(int argc, char* argv[]){
    int n;
    cout << "Enter whatever number N you want to find the fibonacci of\n";
    cin >> n;
    cout << n << " th Fibonacci is \n";
    fib_Accurate(n);
    
    return 0;
}



