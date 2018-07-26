/*************************************************************************
> File Name: decimal_to_binary.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月26日 星期四 14时45分16秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char* argv[]){
    int number;
    cin >> number;
    int remainder, binary = 0, var = 1;

    do{
        remainder = number%2;
        number = number / 2;
        binary = binary + (remainder * var);
        var = var * 10;
    }while(number > 0);

    cout << binary;
    
    return 0;
}




