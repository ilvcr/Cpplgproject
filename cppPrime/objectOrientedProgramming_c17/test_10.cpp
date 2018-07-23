/*************************************************************************
> File Name: test_10.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月23日 星期一 23时56分49秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

vector<string>::iterator
    it = user_query->begin(),
    end_it = user_query->end();

for(; it != end_it; ++it){
    switch(evalQueryString(*it)){
        case WORD:
            evalWord(*it);
            break;
        case AND:
            evalAnd();
            break;
        case OR:
            evalOr();
            break;
        case NOT:
            evalNot();
            break;
        case LPAREN:
            ++_paren;
            ++_lparenOn;
            break;
        case RPAREN:
            --_paren;
            ++_rparenOn;
            evalRParen();
            break;
    }
}


