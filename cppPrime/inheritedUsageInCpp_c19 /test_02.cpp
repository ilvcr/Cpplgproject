/*************************************************************************
> File Name: test_02.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年08月04日 星期六 21时17分08秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

class type_info{

    // 依赖于编译器的实现
private:
    type_info(const type_info&);
    type_info& operator= (const type_info&);

public:
    virtual ~type_info();

    int operator==(const type_info&) const;
    int opertaor!=(const type_info&) const;

    const char* name() const;
};


class PTR{

public:
    PTR(){ 
    
        ptr = new int[chunk]; 
    }

    ~PTR(){

        delete[] ptr;
    }

private:
    int* ptr;
};



