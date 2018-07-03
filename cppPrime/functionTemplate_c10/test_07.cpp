/*************************************************************************
	> File Name: test_07.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月03日 星期二 21时00分16秒
    > Description:  函数模板 min()的三个有效的重载声明
 ************************************************************************/

#include<iostream>
#include<cmath>
using namespace std;

// 类模板 Array 的定义
// (introduced in Section 2.4)
template<typename Type>
class Array{ /*........*/ };

// min() 的三个函数模扳声明
template<typename Type>
Type min( const Array<type>&, int );  // #1

template<typename Type>
Type min( const Type*, int );  // #2

template<typename Type>
Type min( Type, Type );       // #3

int main(){
    Array<int> iA(1024);  //类实例
    int ia[1024];

    // Type == int; min( const Array<int>&, int  )
    int ival0 = min( iA, 1024 );

    // Type == int; min( const int*, int  )
    int ival1 = min( ia, 1024 );

    // Type == double; min( double, double  )
    double dval0 = min( sqrt(iA[0]), sqrt( ia[0] ));

    return 0;
}


