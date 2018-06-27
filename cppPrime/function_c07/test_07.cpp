/*************************************************************************
	> File Name: test_07.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月27日 星期三 21时18分58秒
    > Description:
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class CommandOpt{

public:
    CommandOpt() : _limit(-1), _debug_on( false ) {}
    int parse_options( int argc, char* argv[] );
    string out_file() { return _out_file; }
    bool debug_on() { return _debug_on; }
    int files() { return _file_names.size(); }

    //访问 _file_names
    string& operator[] { int ix };

private:
    inline int usage( int exit_value = 0 );

    bool _debug_on;
    int _limit;
    string _out_file;
    vector<string, allocator> _file_names;

    static const char* const program_name;
    static const char* const program_version;
};


