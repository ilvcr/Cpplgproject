/*************************************************************************
	> File Name: test_10.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月03日 星期二 21时20分41秒
    > Description:  写一个函数练习这些函数模板.依次被传递给函数 sort()
                        的数组为 double 型的数组 int 型的数组和 string 型的数组
 ************************************************************************/

#include<iostream>
#include<string>
#include"Array.h"
using namespace std;


double da[10] = {
    26.7, 5.7, 37.7, 1.7, 61.7, 11.7, 59.7, 15.7, 48.7, 19.7};

int ia[16] = {
    503, 87, 512, 61, 908, 170, 897, 275, 653, 426, 154, 509, 612, 677, 765, 703};

string sa[11] = {
    "a", "heavy", "snow", "was", "falling", "when", 
    "they", "left", "the", "police", "station" };

int main(){
    // 调用构造函数初始化 arrd
    Array<double> arrd( da, sizeof(da) / sizeof(da[0]));

    // 调用构造函数初始化 arri
    Array<int> arri( ia, sizeof(ia) / sizeof(ia[0]));

    // 调用构造函数初始化 arrs  
    Array<string> arrs( sa, sizeof(sa) / sizeof(sa[0]));

    cout << " SOrt array of doubles (size== " << arrd.size() << ")" << endl;
    sort( arrd, 0, arrd.size()-1 );
    display(arrd);

    cout << "\sort array of ints (size == " << arri.size() << ")" << endl;
    sort( arri, 0, arri.size()-1  );
    display(arri);

    cout << "\sort array of strings (size == " << arrs.size() << ")" << endl;
    sort( arrs, 0, arrs.size()-1  );
    display(arrs);

    return 0;
}


