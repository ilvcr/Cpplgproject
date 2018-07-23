/*************************************************************************
> File Name: test_02.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月23日 星期一 19时45分11秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

#include<vector>
#include<set>
#include<string>
#include<utility>

typedef pair<short, short> location;
class Query{
public:
    // 构造函数和析构函数
    // 拷贝构造函数和拷贝赋值操作符
    // 支持公有接口的操作
    virtual void eval() = 0;
    void diaplay() const;

    //继续访问函数
    const set<short>* solution() const;
    
    const vector<location>* locations() const{
        return& _loc;
    }
    
    static const vector<string>* text_file(){
        return _text_file;
    }

protected:
    set<short>* _vec2set(const vector<location>*);

    static vector<string>* _text_file;

    set<short>* _solution;
    vector<location> _loc;
};

inline const set<short>* Query::
solution(){
    return _solution ? _solution : _solution = _vec2set(&_loc);
}



