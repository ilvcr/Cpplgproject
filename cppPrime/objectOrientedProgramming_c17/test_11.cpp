/*************************************************************************
> File Name: test_11.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月24日 星期二 11时41分59秒
> Description: UserQuery 类的定义 
 ************************************************************************/

#ifndef USER_QUERY_H
#define USER_QUERY_H

#include<string>
#include<vector>
#include<map>
#include<stack>

typedef pair<short, short> location;
typedef vector<location, allocator> loc;

#include "Query.h"

class UserQuery{
public:
    UserQuery(vector<string, allocator>* pquery = 0)
        : _query(pquery), _eval(0), _paren(0){
    }

    Query* eval_query();  // 建立层次结构
    void query(vector<string, allocator>* pq);
    void displayQuery();

    static void word_map(map<string, loc*, lsee<string>, allocator>* pwm){
        if(!_word_map){
            _word_map = pwm;
        }
    }

private:
    enum QueryType {WORD = 1, AND, OR, NOT, RPAREN, LPAREN};

    QueryType evalQueryString(const string& query);
    void evalWord(const string& query);
    void evalAnd();
    void evalOr();
    void evalNot();
    void evalRParen();
    bool integrity_check();

    int _paren;
    Query* _eval;
    vector<string>* _query;

    stack<Query*, vector<Query*> > _query_stack;
    stack<Query*, vector<Query*> > _current_op;

    static short _lparenOn, _rparenOn;
    static map<string, loc*, less<string>, allocator>* _word_map;
};
#endif

inline void UserQuery::
evalAnd(){
    Query* pop = _query_stack.top();
    _query_stack.pop();
    AndQuery* pq = new AndQuery(pop);

    if(_lparenOn){
        pq->lparen(_lparenOn);
        _lparenOn = 0;
    }

    if(_rparenOn){
        pq->rapren(_rparenOn);
        _rparenOn = 0;
    }

    _current_op.push(pq);
}


inline void UserQuery::
evalOr(){
    Query* pop = _query_stack.top();
    _query_stack.pop();
    OrQuery* p = new OrQuery(pop);

    if(_lparenOn){
        pq->lparen(_lparenOn);
        _lparenOn = 0;
    }

    if(_rparenOn){
        pq->rparen(_rparenOn);
        _rparenOn = 0;
    }

    _current_op.push(pq);
}


inline void UserQuery::
evalNot(){
    NotQuery* pq = new NotQuery;
    if(_lparenOn){
        pq->lparen(_lparenOn);
        _lparenOn = 0;
    }

    if(_rparenOn){
        pq->rparen(_rparenOn);
        _rparenOn = 0;
    }

    _current_op.push(pq);
}


};


inline void UserQuery::
evalRParen(){
    if(_paren < _current_op.size()){
        Query* poperand = _query_stack.top();
        _query_stack.pop();
        Query* pop = _current_op.top();
        _current_op.pop();
        pop->add_op(poperand);
        _query_stack.push(pop);
    }
}


inline void UserQuery::
evalWord(const string& query){
    NameQuery* pq;
    loc* ploc;

    if(!_word_map->count(query)){
        pq = new NameQuery(query);
    }
    else{
        ploc = (*_word_map)[query];
        pq = new NameQuery(query, *ploc);
    }

    if(_current_op.size() <= _paren){
        _query_stack.push(pq);
    }
    else{
        Query* pop = _current_op.top();
        _current_op.pop();
        pop->add_op(pq);
        _query_stack.push(pop);
    }
}



/*
#include<iostream>
using namespace std;
*/
