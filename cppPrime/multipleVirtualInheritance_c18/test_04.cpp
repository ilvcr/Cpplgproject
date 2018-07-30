/*************************************************************************
> File Name: test_04.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月30日 星期一 15时25分01秒
> Description: 
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;


class ZooAnimal;
extern ostream& operator<<(ostream&, const ZooAnimal&);

class ZooAnimal{

public:
    ZooAnimal(string name, bool onExhibit, string fam_name) : _name(name),             \
                                                              _onEnhibit(onExhibit),   \
                                                              _fam_name(fam_name){
    
    }

    virtual ~ZooAnimal();
    virtual ostream& print(ostream&) const;

    string name() const{

        return _name;
    }

    string family_name() const{

        return _fam_name;
    }

    // ...

protected:
    bool _onEnhibit;
    string _name;
    string _fam_name;
    // ...

};


class Bear : public virtual ZooAnimal{

public:
    enum DanceType{

        two_left_feet, macarena, fandango, waltz};

    Bear(string name, bool onExhibit=true) : ZooAnimal(name, onExhibit, "Bear"),  
                                             _dance(two_left_feet){
                                             
    }

    virtual ostream& print(ostream&) const;
    void dance(DanceType);

    // ...

protected:
    DanceType _dance;
    // ...
};


class Raccon : public virtual ZooAnimal{

public:
    Raccon(string name, bool onExhibit=true) : ZooAnimal(name, onExhibit, "Raccon"), 
                                               _pettable(false){
    
    }

};



class Raccon : public virtual ZooAnimal{

public:
    Raccon(string name, bool onExhibit=true) : ZooAnimal(name, onExhibit, "Raccon"), 
                                               _pettable(false){
                                    
    }

    virtual ostream& print(ostream&) const;
    bool pettable() const{

        return _pettable;
    }

    void pettable(bool petval){

        _pettable = petval;
    }

    // ...

protected:
    bool _pettable;
    // ...
};


class Panda : public Bear, public Raccon, public Endangered{

public:
    Panda(string name, bool onExhibit=ture);
    virtual ostream& print(ostream&) const;

    bool sleeping() const{

        return _sleeping;
    }

    void sleeping(bool newval){

        _sleeping = newval;
    }

    // ...

protected:
    bool _sleeping;
    // ...
};



