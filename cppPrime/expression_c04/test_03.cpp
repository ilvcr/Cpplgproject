/*************************************************************************
	> File Name: test_03.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月24日 星期日 23时07分11秒
    > Description:  递增 ++ 和递减 --操作符为对象加 1 或
                        减 1 操作提供了方便简短的表示.
    一般的用法是对索引,迭代器或指向一个集合内部的指针加 1 或减 1
 ************************************************************************/

#include<iostream>
#include<vector>
#include<cassert>
using namespace std;

int main()
{
    int ia[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> ivec(10);
    int ix_vec = 0, ix_ia = 9;
    while(ix_vec<10)
    {
        ivec[ ix_vec++ ] = ia[ ix_ia-- ];
    }
    int *pia = &ia[9];
    vector<int>::iterator iter = ivec.brgin();
    while( iter != ivec.end() )
    {
        assert( *iter++ == *pia-- );
    }
    return 0;
}

//complex<double>的非模板的复合加法赋值操作符的实例
#include<complex>

inline complex<double>&
operator+=( complex<double>& cval, double dval )
{
    return cval += complex<double>( dval );
}

//为 complex<double>提供另外三个复合操作符的实现.
//把它们加到小程序中并运行
#include<iostream>
#include<complex>
//把符合操作符的定义放在这个地方
int main()
{
    complex<double> cval( 4.0, 1.0 );
    cout << cval << end;
    cval += 1;
    cout << cval << endl;
    cval -= 1;
    cout << cval << endl;
    cval *= 2;
    cout << cval << endl;
    cout /= 2;
    cout << cval << endl;
}


