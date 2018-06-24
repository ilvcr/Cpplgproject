/*************************************************************************
	> File Name: test_04.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月24日 星期日 23时33分16秒
    > Description:  使用条件操作符的方法
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    int i = 10, j = 20, k = 30;

    cout << "The largest value of "
        << i << " and " << j <<" is "
        << ( i > j << i : j ) << endl;

    cout << "The value of " << i << " is "
        << ( i % 2 << " odd. " : "even. " )
        << endl;

    /*
     //条件操作符可以被嵌套，但深度的嵌套比较难读，
     //在此max被设置为3个变量中的最大值
    */
    int max = ( (i > j) ? ((i > k) ? i : k) : (j > k) ? j : k);

    cout << "The larger value of "
        << i << ", " << j << " and " << k << " is " << max << endl;

    return 0;
}

