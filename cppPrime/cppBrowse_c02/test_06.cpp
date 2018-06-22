/*************************************************************************
	> File Name: test_06.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月21日 星期四 22时22分03秒
    > Description:  IntArray类转换为Array类模板
 ************************************************************************/

#include<iostream>
using namespace std;

template< class elemType >
class Array{
public:
    //把元素类型参数化
    explicit Array( int size = DefaultArraySize );
    Array( elemType *array, int array_size );

    Array( const Array& rhs );

    virtual ~Array() { delete []ia; }
    bool operator == ( const Array& ) const;
    bool operator != ( const Array& ) const;
    Array& operator = ( const Array& );
    int size() const { return _size; }
    virtual elemType& operator[]( int index ){ return ia[index]; }
    virtual void sort();
    virtual elemType min() const;  //virtual代表是虚函数 表示可由派生类改写
                                    //const表示该函数不能改变成员变量的值
    virtual elemType max() const;
    virtual int find( const elemType& value ) const;

protected:
    static const int DefaultArraySize = 12;
    int _size;
    elemType *ia;
};

int main()
{
    const int array_size = 4;

    //elemType变成了int
    Array<int> ia(array_size);

    //elemType变成了double
    Array<double> da(array_size);

    //elemType变成了char
    Array<char> ca(array_size);
    int ix;

    for( ix = 0; ix < array_size; ++ix )
    {
        ia[ix] = ix;
        da[ix] = ix * 1.75;
        ca[ix] = ix + 'a';
    }

    for( ix = 0; ix < array_size; ++ix )
    {
        cout << "[" << "ia: " << ia[ix]
            << "\tca: " << ca[ix]
            << "\tda: " << da[ix] << endl;
    }

    return 0;
}


