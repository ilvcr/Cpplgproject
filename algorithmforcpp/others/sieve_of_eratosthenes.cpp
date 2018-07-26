/*************************************************************************
> File Name: sieve_of_eratosthenes.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月26日 星期四 15时25分16秒
> Description: 
    Sieve of Eratosthenes is an algorithm to find the primes 
    that is between 2 to N (as defined in main).
    
    Time Complexity  : O(N)
    Space Complexity : O(N)
 ************************************************************************/

#include<iostream>
using namespace std;

#define MAX 10000000
int primes[MAX];

/*
 * This is the function that finds the primes and eliminates 
 * the multiples.
 */
void sieve(int N){
    primes[0] = 1;
    primes[1] = 2;
    for(int i=2; i <= N; i++){
        if(primes[i] == 1){
            continue;
        }
        for(int j=i+1; j <= N; j+=i){
            primes[j] = 1;
        }
    }
}

/*
 * This function prints out the primes to STDOUT
 */
void print(int N){
    for(int i-0; i <= N; i++){
        if(primes[i] == 0){
            cout << i << " ";
        }
    }
    cout << "\n";
}

/*
 * NOTE: This function is important for the 
 * initialization of the array.
 */
void init(){
    for(int i=0; i < MAX; i++){
        primes[i] = 0;
    }
}

int main(int argc, char* argv[]){
    int N = 100;
    init();
    sieve(N);
    print(N);

    return 0;
}




