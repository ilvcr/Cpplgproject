/*************************************************************************
> File Name: test_03.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月04日 星期六 21时31分13秒
> Description: 
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

class bad_alloc : public exception{

    // ...
public:
    bad_alloc() throw();
    bad_alloc(const bad_alloc&) throw();
    bad_alloc& operator=(const bad_alloc&) throw();
    virtual ~bad_alloc() throw();
    virtual const char* what() const throw();
};


class Base{

public:
    virtual double f1(double) throw();
    virtual int f2(int) throw(int);
    virtual string f3() throw(int, string);
    // ...
};


class Derived : public Base{

public:
    // 错误: 异常规范没有 base::f1() 的严格
    double f1(double) throw(string);

    // ok: 与 base::f2() 相同的异常规范
    int f2(int) throw(int);

    // ok: 派生 f3() 更严格
    string f3() throw(int);

    // ..
};


// 保证不会抛出异常
void compute(Base* pb) throw(){

    try{

        pb->f3();     // 可能抛出 int 或者 string 类型的异常
    }
    // 处理来自 Base::f3() 的异常
    catch(const string&){ }
    catch(int){ }
}



