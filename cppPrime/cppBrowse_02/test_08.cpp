/*************************************************************************
	> File Name: test_08.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月21日 星期四 23时06分01秒
    > Description:    练习Array和ArrayRC类模板类型
 ************************************************************************/

#include<iostream>
#include"Array.h"
#include"ArrayRC.h"

using namespace std;

template<class elemType>
inline void swap( Array<elemType> &array, int i, int j )
{
    elemType tmp = array[i];
    array[i] = array[j];
    array[j] = tmp;
}

int main()
{
    Array<int> ia1;
    ArrayRC<int> ia2;
    cout << "swap() with Array<int> ia1\n";
    int size = ia1.size();
    swap(ia1, 1, size);
    cout << "swap() with ArrayRC<int> ia2\n"
    size = ia2.size();
    swap(ia2, 1, size);

    return 0;
}


