/*************************************************************************
> File Name: longest_common_subsequence.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月21日 星期六 22时11分34秒
> Description:   Longest common subsequence - Dynamic Programming
 ************************************************************************/

#include<iostream>
using namespace std;

void Print(int trance[20][20], int m, int n, string a){
    if(m == 0 || n == 0){
        return;
    }
    if(trance[m][n] == 1){
        Print(trance, m-1, n-1, a);
        cout << a[m-1];
    }
    else if(trance[m][n] == 2){
        Print(trance, m-1, n, a);
    }
    else if(trance[m][n] == 3){
        Print(trance, m, n-1, a);
    }
}

int lcs(string a, string b){
    int m = a.length(), n = b.length();
    int res[m+1][n+1];
    int trance[20][20];

    //fill up the arrays with zeros
    for(int i=0; i < m+1; i++){
        for(int j=0; i < n+1; j++){
            res[i][j] = 0;
            trance[i][j] = 0;
        }
    }

    for(int i=0; i < m+1; ++i){
        for(int j=0; j < n+1; ++j){
            if(i == 0 || j == 0){
                res[i][j] = 0;
                trance[i][j] = 0;
            }
            else if(a[i-1] == b[j-1]){
                res[i][j] = 1+res[i-1][j-1];
                trance[i][j] = 1;  //1 means trace the matrix in upper left diagonal direction.
            }
            else{
                if (res[i-1][j] > res[i][j-1]){
                    res[i][j] = res[i-1][j];
                    trance[i][j] = 2   // 2 means trace the matrix in upwards direction.
                }
                else{
                    res[i][j] = res[i][j-1];
                    trance[i][j] = 3   //  means trace the matrix in left direction.
                }
            }
        }
    }

    Print(trance, m, n, a);

    return res[m][n];
}


int main(int argc, char* argv[]){
    string a, b;
    cin >> a >> b;
    cout << lcs(a, b);
    return 0;
}



