/*************************************************************************
> File Name: test_03.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月17日 星期二 11时14分08秒
> Description:  利用定位 new 操作符进行堆数组的初始化
 ************************************************************************/

#include<iostream>
#include<utility>
#include<vector>
#include<new>
#include<cstddef>
#include"Account.h"
using namespace std;

typedef pair<char*, double> value_pair;
/* init_heap_array(),
* 被声明为静态成员函数
* 提供类对象堆数组的分配和初始化

* init_values: 数组元素的初始值对
* elem_count: 数组元素个数
* 如果为 0, 数组大小与 init_values vector 一样
*/

Account*
Account::
init_heap_array(
vector<value_pair>& init_values,
vector<value_pair>::size_type elem_count = 0){
    
    vector<value_pair>::size_type vec_size = init_values.size();

    if( vec_size == 0 && elem_count == 0 ){
        return 0;
    }
    // 分配的数组大小是 elem_count, 或者, 若 elem_count 为 0 则为 vector 的大小
    size_t elems = elem_count ? elem_count : vec_size;

    //找到一块不用的内存来保存数组
    char* p = new char[sizeof(Account)*elems];

    // 每个元素的独立初始化
    int offset = sizeof( Account );
    for(int ix=0; ix < elems; ++ix){
        // 偏移到第 ix 个元素
        // 如果提供了一个初始值对
        // 把该对传递给构造函数
        // 否则, 调用缺省构造函数

        if(ix < vec_size){
            new(p+offset*ix) Account(init_values[ix].first, init_values[ix].second);
        }
        else{
            new(p+offset*ix) Account;
        }
    }

    // ok: 元素被分配并初始化
    // 返回第一个元素的指针
    return (Account*)p
}
