/*************************************************************************
	> File Name: test_02.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月24日 星期日 22时49分34秒
    > Description:  统计 vector 中小于某个给定值的元素的个数.
                        小于操作符的结果加到一个记录元素个数的计数器上///
 ************************************************************************/

#include<iostream>
using namespace std;

int elem_cnt = 0;

vector<int>::iterator iter = ivec.begin();
while( iter != ivec.end() )
{
    //同下: elem_cnt = elem_cnt + ( *iter < some_value )
    //*iter < some_value的布尔值
    //将提升为1或0

    elem_cnt += *iter < some_value;
    ++iter;
}


//把某个操作符应用在一个对象上,然后再把结果赋给这个对象
int arraySum( int ia[], int sz )
{
    int sum = 0;
    
    for( int i=0; i<sz; ++i )
    {
        //equivalent of: sum = sum + ia[i]
        sum += ia[ i ];
    }
    return sum;
    a op = b;
}


