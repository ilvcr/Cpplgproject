/*************************************************************************
	> File Name: test_02.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月21日 星期四 21时18分56秒
    > Description:  建立一个名为IntArray的类
 ************************************************************************/

#include<iostream>
using namespace std;

class IntArray{
    public:
        //相等与不相等操作
        bool operator == ( const IntArray& ) const;
        bool operator != ( const IntArray& ) const;

        //赋值操作
        IntArray& operator = ( const IntArray& );

        int size() const;
        void sort();

        int min() const;
        int max() const;

        //如果值在数组中找到，返回第一次出现的索引
        //否则返回-1
        int find( int value ) const;
        
        int size() const { return _size; }
    private:
        //私有实现代码
        int _size;
        int *ia;
}；

//一组 min()重载函数,每个函数都有一个特有的参数表
#include<string>
int min( const int *pia, int size );
int min( int, int );
int min( const char *str );
char min( string );
string min( string, string );


