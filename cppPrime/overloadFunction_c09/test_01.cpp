/*************************************************************************
	> File Name: test_01.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月03日 星期二 19时50分53秒
    > Description:  一个声明为局部的函数将隐藏而不是重载一个全局域中声明的函数
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

void print( const string& );
void print( double ); //overloads print()
void fooBar( int ival ){
    //独立的域 隐藏 print()的两个实例
    extern void print( int );

    //错误: print( const string &  )在这个域中被隐藏
    print( "Value: " );
    print( ival );  //ok: print( int  ) 可见
}

namespace IBM{
    extern void print( const string < );
    extern void print( double );  //overloads print()
}

namespace Disney{
    // 独立的域:
    // 没有重载 IBM 的 print()
    extern void print( int );
}

namespace libs_R_us{
    int max( int, int );
    int max( double, double );
    extern void print( int );
    extern void print( double );
}

//using声明
using libs_R_us::max;
using libs_R_us::print( double );  //错误
void func(){
    max( 87, 65 );  // 调用 libs_R_us::max( int, int  )
    max( 35.5, 76.6  );  // 调用 libs_R_us::max( double, double  )
}


