/*************************************************************************
	> File Name: test_01.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月02日 星期一 21时25分23秒
    > Description:  同一个名字在不同的域中可以引用不同的实体，如下有四个实体被命名为s1
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

//按字典比较s1和s2
int lexicoCompare( const string& s1, const string& s2 ){
    //...
}

//比较s1和s2的长度
int sizeCompare( const string& s1, const string& s2 ){
    ...
}

typedef int (*PFI) ( const string&, const string& );

//排序字符串数组
void sort( string* s1, string* s2, PFI compare = lexicoCompare ){
    ...
}

string s1[10] = { "a", "light", "drizzle", "was", "falling",
                "when", "they", "left", "the", "school" };

int main(){
    // 调用 sort() -用比较的缺省实参
    // 调用全局数组 s1

    sort( s1, s1 + sizeof(s1) / sizeof(s1[0]) - 1 );

    for( int i = 0; i < sizeof(s1) / sizeof(s1[0]); ++i ){
        cout << s1[i].c_str() << "\n\t";
    }

    return 0;
}


