/*************************************************************************
	> File Name: test_06.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月26日 星期二 11时33分31秒
    > Description:  另一种方式的查找
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;


int main(){
    string numerics( "0123456789" );
    string name( "r2d2" );
    string::size_type pos = 0;

    while(( pos = name.find_first_of( numerics, pos )) != string::npos ){
        cout << " found numerics at index: " << pos << "\telement is " << name[pos] << endl;

        //移到被找到元素的最后一位
        ++pos;
    }

    return 0;
}



