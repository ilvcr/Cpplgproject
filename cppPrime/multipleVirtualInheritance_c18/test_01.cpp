/*************************************************************************
> File Name: test_01.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月30日 星期一 15时06分54秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

class Bear : public ZooAnimal{

public:
    virtual ~Bear();
    virtual ostream& print(ostream) const;
    virtual string isA() const;
    // ...

};

class Endangered{

public:
    virtual ~Endangered();
    virtual ostream& print(ostream&) const;
    virtual void highlight() const;
    // ...

};

class Panda : public Bear, publiv Endangered{

public:
    virtual ~Panda();
    virtual ostream& print(ostream&) const;
    virtual void cuddle();
    // ...
};


