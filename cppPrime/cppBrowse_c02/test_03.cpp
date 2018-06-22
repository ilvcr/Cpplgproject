/*************************************************************************
	> File Name: test_03.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月21日 星期四 21时33分00秒
    > Description:  02中修改过的IntArray类
 ************************************************************************/

#include<iostream>
using namespace std;

class IntArray{
public:
    //构造函数
    explicit IntArray( int size = DefaultArraySize );
    IntArray( int *array, int array_size );
    IntArray( const IntArray &rhs );

    //虚拟析构函数
    virtual ~IntArray(){ delete []ia; }

    //等于和不等于操作
    bool operator == ( const IntArray& ) const;
    bool operator != ( const IntArray& ) const;
    IntArray& operator = ( const IntArray& );
    int size() const { return _size; }

    //去掉索引检查功能。。。
    virtual int& operator[](int index) { return ia[index]; }
    virtual void sort();
    virtual int min() const;
    virtual int max() const;
    virtual int find( int value ) const;

protected:
    static const int DefaultArraySize = 12;
    void init(int sz, int *array);
    int _size;
    int *via;

}

