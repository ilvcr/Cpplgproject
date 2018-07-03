/*************************************************************************
	> File Name: test_02.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月03日 星期二 20时01分17秒
    > Description:
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

namespace libs_R_us{
    extern void print( int );
    extern void print( double );
}

extern void print( const string& );

// libs_R_us::print( int  ) 和 libs_R_us::print( double  )
// 重载 print( const string &  )
using libs_R_us::print;

void fooBar( int ival ){
    print( "Value: " );  // 调用全局 print( const string &  )
    print( ival  );      // 调用 libs_R_us::print( int  )
}


