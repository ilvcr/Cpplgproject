/*************************************************************************
> File Name: test_03.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月30日 星期一 15时20分18秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;


class Endangered{

public:
    ostream& print(ostream&) const;
    void highlight();
    // ...

};

class ZooAnimal{

public:
    bool onExhibit() const;
    // ...

private:
    bool highlight(int zoo_location);
    // ...

};


class Bear : public ZooAnimal{

public:
    ostream& print(ostream&) const;
    void dance(dance_type) const;
    // ...

};

class Panda : public Bear, public Endangered{

public:
    void cuddle() const;
    // ...

};



