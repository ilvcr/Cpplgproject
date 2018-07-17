/*************************************************************************
> File Name: sparse_matrix.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月17日 星期二 22时12分17秒
> Description: 
    A sparse matrix is a matrix which has number of zeroes greater than (m*n)/2,
    where m and n are the dimensions of the matrix.
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, cahr* argv[]){

    int m, n, i, j, c = 0;
    cout << "Enter dimensions of matrix:";
    cin >> m >> n;

    int a[m][n];
    cout << "Enter matrix elements:";
    
    for(i=0; i < m; i++){
        for(j=0; j < n; j++){
            cin >> a[i][j];
        }
    }

    for(i=0; i < m; i++){
        for(j=0; j < n; j++){
            if(a[i][j] == 0){
                c++;  //Counting number of zeros
            }
        }
    }

    if(c >((m*n)/2)){  //Checking for sparse matrix
        cout << "sparse matrix";
    }
    else{
        cout << "Not a sparse matrix";
    }
}




