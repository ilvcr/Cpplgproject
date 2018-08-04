/*************************************************************************
> File Name: test_01.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月04日 星期六 21时10分56秒
> Description: 用类库来表示公司中不同的雇员 
 ************************************************************************/

#include<iostream>
using namespace std;


class employee{

public:
    virtual int salary();
    virtual int bonus();
};

class manager : public employee{

public:
    int salary();
};

class programmer : public employee{

public:
    int salary();
    int bonus();
};

void company::payroll(employee* pe){

    // 使用pe->salary()
}

void company::payroll(employee* pe){

    // dynamic_cast 和测试在同一条件表达式中
    if(programmer* pm = dynamic_cast<programmer*>(pe)){

        // 使用 pm 调用 programmer::bonus()
    }
    else{
        // 使用 employee 的成员函数
    }
}


