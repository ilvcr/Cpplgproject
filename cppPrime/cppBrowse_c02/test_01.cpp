/*************************************************************************
	> File Name: test_01.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月21日 星期四 21时11分43秒
    > Description:  程序初始化一个包含10个元素的数组,值分别从0~9,然后在标准输出上以降序输出
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int ia[10];
    int index;

    for( index = 0; index < 10; ++index )
    {
        ia[ index ] = index;
    }

    for( index = 9; index >= 0; --index )
    {
        cout << ia[ index ] << " ";
        cout << endl;
    }

    return 0;
}


