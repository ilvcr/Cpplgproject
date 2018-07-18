/*************************************************************************
> File Name: test_01.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月18日 星期三 11时11分55秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

class String;
istream& operator>>( istream&, String& );
ostream& operator<<( ostream&, String& );

class String{

public:
    // 构造函数的重载集合
    // 提供自动初始化
    String( const char *= 0 );
    String( const String& );

    //析构函数:自动释放初始化的对象
    ~String();

    //赋值操作符的重载集合
    String& operator = ( const String& );
    String& operator = (const char * );

    //重载的下标操作符
    char& operator[]( int ) const;

    //等于操作符的重载集合
    //str1 == str2
    bool operator==( const char* ) const;
    bool operator==( const String& ) const;

    //成员访问函数
    int size() { return _size; }
    char* c_str() { return _string;}

private:
    int _size;
    char* _string;
};

int main(){
    String name1 = "Sherlock";
    String name2 = "Holmes";
    name1 += " ";
    name1 += name2;
    if( !(name1 == "Sherlock Holmes")){
        cout << "concatenation did not ork\n";
    }
}


