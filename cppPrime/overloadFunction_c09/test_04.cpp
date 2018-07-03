/*************************************************************************
	> File Name: test_04.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月03日 星期二 20时11分22秒
    > Description:
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

void manip( vector<int>& );
void manip( const vector<int>& );
vector<int> f();
extern vector<int> vec;

int main(){
    manip( vec );  // 选择 manip( vector<int> &  ) is selected
    manip( f() );  // 选择 manip( const vector<int> &  ) is selected
    return 0;
}


