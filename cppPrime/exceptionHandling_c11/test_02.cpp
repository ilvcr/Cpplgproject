/*************************************************************************
	> File Name: test_02.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年07月04日 星期三 11时32分02秒
    > Description:
 ************************************************************************/

#include<iostream>
using namespace std;

void manip(){
    resource res;
    res.lock();

    try{
        //使用res
        //某些能够引起异常被抛出的动作
    }

    catch( /*...*/ ){
        res.release();
        throw;
    }

    res.release(); //如果抛出异常则跳过
}


