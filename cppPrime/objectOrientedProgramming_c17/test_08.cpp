/*************************************************************************
> File Name: test_08.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月23日 星期一 23时34分55秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

void AndQuery::eval(){
    //计算左右操作数
    _lop->eval();
    _rop->eval();

    //grab the iterators
    vector<location, allocator>::const_iterator
        riter = _rop->locations()->begin(),
        liter = _lop->locations()->begin(),
        riter_end = _rop->locations()->end(),
        liter_end = _lop->locations()->end();

    //当它们都有元素需要比较时, 循环
    while(liter != liter_end && riter != riter_end){
        
        //当左行数大于右行数时
        while((*liter).first > (*riter).first){
            ++riter;
            if(riter == riter_end){
                return;
            }
        }
        
        //当左行数小于右行数时
        while((*liter).first < (*riter).first){
            // 如果在一行的最后一个单词
            // 和下一行的首单词发现匹配
            // _max_col: 标识了一行的最后一个单词
            if((*liter).first == (*riter).first-1 && (&riter).second == 0 &&
                                 (*liter).second == (*_max_col)[(*liter).first]){
                _loc.push_back(*liter);
                _loc.push_back(*riter);
            }
            ++liter;
            if(liter == liter_end){
                return;
            }
        }
        
        // 当都在同一行时
        while((*liter).first == (*riter).first){
            if((*liter),second+1 == ((*riter).second)){
                // ok: 一个相邻的匹配
                _loc.push_back(*liter);
                ++liter;
                _loc.push_back(*riter);
                ++riter;
            }
            else{
                if((*liter).second <= (*riter).second){
                    ++liter;
                }
                else{
                    ++riter;
                }

                if(liter == liter_end || riter == riter_end){
                    return;
                }
            }
        }
    }
}


