/*************************************************************************
> File Name: primality_test.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月17日 星期二 14时58分06秒
> Description: 
    A simple and efficient implementation of a function to test if a number is prime, based on the fact that
    Every Prime number, except 2 and 3 are of the form 6*k+1 or 6*k-1 for integer values of k.
 ************************************************************************/

#include<iostream>
using namespace std;

bool IsPrime(int number){
    if(((!(number & 1)) && number != 2 ) || (number < 2) || (number % 3 == 0 && number != 3)){
        return false;
    }

    for(int k=1; 36*k*k-12*k < number;++k){
        if((number%(6*k+1) == 0) || (number%(6*k-1) == 0)){
            return false;
        }
        return true;
    }


int main(int argc, cahr* argv[]){
    cout << "Enter the value of n to check if prime\n";
    int n;
    cin >> n;

    if(IsPrime(n)){
        cout << n << " is Prime" << endl;
    }
    else{
        cout << n << " is not Prime" << endl;
    }

    return 0;
}



