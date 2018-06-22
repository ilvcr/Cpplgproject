/*************************************************************************
	> File Name: test_02.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月21日 星期四 20时47分45秒
    > Description: 非顺序执行的迭代或循环语句
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int iterations = 0;
    bool continue_loop = true;
    
    while( continue_loop != false )
    {
        ++iterations;

        cout << "The while loop has executed"
             << iterations << "times\n";

        if( iterations == 5 )
            continue_loop = false;
    }

    return 0;

}


