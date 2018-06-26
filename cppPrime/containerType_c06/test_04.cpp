/*************************************************************************
	> File Name: test_04.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月26日 星期二 11时27分40秒
    > Description:  找到一个字串
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;


int main(){
    string name( "AnnaBelle" );
    int pos = name.find( "Anna" );

    if( pos == string::npos ){
        cout << "Anna not found!\n";
    }
    else{
        cout << " Anna found at pos: " << pos << endl;
    }

    return 0;
}



