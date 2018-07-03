/*************************************************************************
	> File Name: test_03.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月03日 星期二 20时05分57秒
    > Description:
 ************************************************************************/

#include<iostream>
using namespace std;

namespace basicLib{
    int print( int );
    double print( double );
}

namespace matrixLib{
    class matrix{ /*.....*/ };
    void print( const matrix& );
}

void display(){
    using basicLib::print;
    matrixLib::matrix mObj;
    print( mObj ); // 调用 matrixLib::print( const matrix&  )
    print( 87 );   // 调用 basicLib::print( int  )
}

void func(){
    using namespace libs_R_us;
    max( 87, 65 )       // 调用 libs_R_us::max( int, int  )
    max( 35.5, 76.6  ); // 调用 libs_R_us::max( double, double  )
    max( 'J', 'L'  );   // 调用 ::max( char, char  )
}


