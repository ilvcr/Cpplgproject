/*************************************************************************
	> File Name: test_05.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月21日 星期四 22时00分05秒
    > Description: 实现了 IntArray 与 IntArrayRC 两个类的层次结构
 ************************************************************************/

#include<iostream>
#include<IntArray.h>
#include<IntArrayRC.h>

extern void swap(IntArray&, int, int);

using namespace std;

int main()
{
    int array[4] = {0, 1, 2, 3};
    IntArray ia1(array, 4);
    IntArrayRC ia2(array, 4);

    //error: 一位偏移(off-by-one),应该是size-1
    //IntArray对象捕捉不到此错误
    cout << "swap() with IntArray ia1\n";
    swap( ia1, 1, ia1.size() );

    //ok: IntArrayRC对象可以捕捉到此错误
    cout << "swap() with IntArrayRC ia2\n";
    swap( ia2, 1, ia2.size() );

    return 0;
}


