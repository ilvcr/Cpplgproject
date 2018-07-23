/*************************************************************************
> File Name: test_03.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月23日 星期一 19时56分21秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;


typedef vector<location> loc;

class NameQuery : public Query{
public:
    //..
    //改写 virtual Query::eval()
    void eval();

    //继续访问函数
    string name() const{
        return _name;
    }

    static const map<string, loc*>* word_map(){
        return _word_map;
    }

protected:
    string _name;
    static map<string, loc*>* _word_map;
};

class AndQuery : public Query{
public:
    virtual void eval();

    const Query* rop() const{
        return _rop;
    }
    const Query* lop() const{
        return -lop;
    }
    
    static void max_col(const vector<int>* pcol){
        if(!_max_col){
            _max_col = pcol;
        }
    }

protected:
    Query* _lop;
    Query* _rop;
    
    static const vector<int>* _max_col;
};


void Query::
display(){
    if(!_solution->size()){
        cout << "\n\tSorry, " << " no matching lines were found in text.\n" << endl;
    }

    set<short>::const_iterator it = _solution->begin(), end_it = _solution->end();

    for(; it != end_it; ++it){
        int line = *it;

        //文本行不要从 0 开始
        cout << "( " << line+1 << " )" << (*_text_file)[line] << "\n";
    }

    cout << endl;
}

void NameQuery::
display_partial_solution(ostream& os){
    os << _name << " is found in " 
                << (_solution ? _solution->size() : 0) 
                << " lines of text\n";
}


