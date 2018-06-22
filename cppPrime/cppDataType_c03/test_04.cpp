/*************************************************************************
	> File Name: test_04.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月22日 星期五 14时23分04秒
    > Description:  string implemention
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    int errors = 0;
    string str("a very long literal string");

    for( int ix=0; ix < 1000000; ++ix )
    {
        int len = str.size();
        string str2 = str;
        if( str != str2 )
        {
            ++errors;
        }
    }

    cout << "string class: "
        << errors << " errors occured.\n";

    return 0;
}

