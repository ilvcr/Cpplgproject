/*************************************************************************
> File Name: test_09.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月23日 星期一 23时50分22秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

Query::Query(const Query& rhs) : _loc(rhs._loc), _paren(rhs._paren){

    if(rhs._solution){
        _solution = new set<short>;
        set<short>::itertor
            it = ths._solution->begin(),
            end_it = rhs._solution->end();

        for(; it != end_it; ++it){
            _solution->insert(*it);
        }
    }
    else{
        _solution = 0;
    }
}

Query::Query(const Query& rhs)
    : _loc(rhs._loc),
    _paren(rhs._paren),
    _solution(0)
{}

Query& Query::
operator=(const Query& rhs){
    // 阻止自我赋值
    if(&rhs != this){
        _paren = rhs._paren;
        _loc = rhs._loc;

        delete _solution;

        _solution = 0;
    }
    return *this;
}


