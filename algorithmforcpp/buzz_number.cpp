/*************************************************************************
> File Name: buzz_number.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月15日 星期日 15时38分16秒
> Description:   A buzz number is a number that is either divisble by 7 or has last digit as 7.
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    int n, t;
    cin >> t;

    while(t--){
        cin >> n;
        if((n%7 == 0) || (n%10) == 7){
            cout << n << " is a buzz bumber" << endl;
        }
        else{
            cout << n << " is not a buzz number " << endl;
        }
    }

    return 0;

}



