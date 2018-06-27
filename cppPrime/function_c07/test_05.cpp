/*************************************************************************
	> File Name: test_05.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月27日 星期三 20时45分09秒
    > Description:
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

void putValues( vector<int> );

const lineLength = 12;

int main(){
    int i, j[ 2 ];

    vector<int> vec1(1);            //创建一个单元素的vector
    vec1[0] = i;
    putValues( vec1 );
    vector<int> vec2;               //创建一个空的vector

    //在vec2中添加元素
    for( int ix = 0; ix < sizeof( j ) / sizeof( j[0] ); ++ix ){
        //vec2[ix] == j[ix];
        vec2.push_back( j[ix] );
    }

    putValues( vec2 );

    return 0;
}

void putValues( vector<int> vec ){
    cout << "( " << vec.size() << " )< ";
    for( int i = 0; i < vec.size(); ++i ){
        if( i % lineLength == 0 && i != vec.size()-1 ){
            cout << ", ";
        }
    }
    cout << " >\n";
}



