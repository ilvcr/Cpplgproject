/*************************************************************************
	> File Name: test_01.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月26日 星期二 10时43分17秒
    > Description:  调用容器的capacity()操作来查询容器的容量,长度(size())是指
                    容器当前拥有元素的个数
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector< int > ivec;
    cout << " ivec: size " << ivec.size() << " capacity: " << ivec.capacity() << endl;

    for( int ix = 0; ix < 24; ++ix ){
        ivec.push_back( ix );
        cout << " ivec: size " << ivec.size() 
            << " capacity: " << ivec.capacity() << endl;
    }
}
