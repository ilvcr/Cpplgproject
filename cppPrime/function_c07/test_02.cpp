/*************************************************************************
	> File Name: test_02.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月27日 星期三 14时18分34秒
    > Description:
 ************************************************************************/

#include<iostream>
using namespace std;

//引用参数 'occurs' 可以含有第二个返回值
vector<int>::const_iterator look_up(
                                    const vector<int>& vec,
                                    int value,
                                    int& occurs){
    
    // res_iter 被初始化为最后一个元素的下一位置
    vector<int>::const_iterator res_iter = vec.end();
    occurs = 0;
    
    for( vector<int>::const_iterator iter = vec.begin(); iter != vec.end(); ++iter ){
        if( *iter == value ){
            if( res_iter == vec.end()){
                res_iter = iter;
            }
            ++occurs;
        }
    }

    return res_iter;
}


