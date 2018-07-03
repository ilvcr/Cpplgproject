/*************************************************************************
	> File Name: test_04.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月03日 星期二 20时36分46秒
    > Description:  min()被实例化两次:一次是针对 5 个 int 的数组类型,
                        另一次是针对 6 个 double 的数组类型
 ************************************************************************/

#include<iostream>
using namespace std;

//函数模板 min() 的定义
// 有一个类型参数 Type 和一个非类型参数 size
template<Typename Type, int size>
Type min( Type (&r_array)[size] ){
    Type min_val = r_array[0];
    for( int i = 1; i < size; ++i ){
        if( r_array[i] < min_val ){
            min_val = r_array[i];
        }
    }

    return min_val;
}

// size 没有指定——ok
// size = 初始化表中的值的个数
int ia[] = { 10, 7, 14, 3, 25 };
double da[6] = { 10.2, 7.1, 14.5, 3.2, 25.0, 16.8  };

int main(){
    // 为 5 个 int 的数组实例化 min()
    // Type => int, size => 5
    int i = min( ia );
    if( i != 3 ){
        cout << "??oops: integer min() failed\n";
    }
    else{
        cout << "!!ok: integer min() worked\n";
    }


    // 为 6 个 double 的数组实例化 min()
    // Type => double, size => 6
    double d = min( da );
    if( d != 3.2 ){
        cout << "??oops: double min() failed\n";
    }
    else{
        cout << "!!ok: double min() worked\n";
    }

    return 0;
}



