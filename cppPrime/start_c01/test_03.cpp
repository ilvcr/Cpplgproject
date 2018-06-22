/*************************************************************************
	> File Name: test_03.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月21日 星期四 20时54分24秒
    > Description:  cin使用示例
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word;
    while( cin >> word )
        cout << "word read is: " << word << '\n';
    cout << "ok: no more wordes to read: bye!!\n";

    return 0;
}


