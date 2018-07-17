/*************************************************************************
> File Name: strassen_matrix_multiplication.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月17日 星期二 22时46分30秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

Multiply(int A[][], int B[][], int n){
    if(n == 2){
        int p1= (a[0][0] + a[1][1])*(b[0][0]+b[1][1]);
        int p2= (a[1][0]+a[1][1])*b[0][0];
        int p3= a[0][0]*(b[0][1]-b[1][1]);
        int p4= a[1][1]*(b[1][0]-b[0][0]);
        int p5= (a[0][0]+a[0][1])*b[1][1];
        int p6= (a[1][0]-a[0][0])*(b[0][0]+b[0][1]);
        int p7= (a[0][1]-a[1][1])*(b[1][0]+b[1][1]);


        int c[n][n];
        c[0][0]=p1+p4-p5+p7;
        c[0][1]=p3+p5;
        c[1][0]=p2+p4;
        c[1][1]=p1-p2+p3+p6;

        return c[][];
    }
    else{
    }
}

int main(int argc, char* argv[]){
    int p, q, r, s;
    cout << "Enter the dimensions of Maxtrixs";
    cin >> n;
    
    int A[n][n];
    int B[n][n];
    cout << "Enter the elements of Matrix A";

    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            cin >> A[i][j];
        }
    }

    cout << "Enter the elements of Matrix B";

    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            cin >> B[i][j];
        }
    }

    Multiply(A, B, n);

    return 0;
}


