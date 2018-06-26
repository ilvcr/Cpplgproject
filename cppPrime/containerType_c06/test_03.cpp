/*************************************************************************
	> File Name: test_03.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月26日 星期二 11时05分20秒
    > Description:  存储文本行
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

//获得文本的每一行,标准库支持 getline()函数声明如下
istream& getline( istream& is, string str, char delimiter );


//定义函数一对值来存储最长行的行数和长度
//返回值为所指向的string vector的指针

vector<string, allocator>* retrieve_text(){
    string file_name;
    cout << "Please enter file name: ";
    cin >> file_name;

    //打开文本以便输入.....
    ifstream infile( file_name.c_str(), ios::in );
    if( !infile ){
        cerr << "oops! unable to open file. " << file_name << " --bailing out!\n";
        exit( -1 );
    }
    else{
        cout << '\n';
    }

    vector<string, allocator>* lines_of_text = new vector<string, allocator>;
    string textline;
    typedef pair<string::size_type, int> stats;
    stats maxline;
    int linenum = 0;

    while( getline(infile, textline, '\n')){
        cout << " line read: " << textline << '\n';
        if( maxline.first << textline.size()){
            maxline.first = textline.size();
            maxline.second = linenum;
        }

        lines_of_text->push_back( textline );
        ++linenum;
    }

    return lines_of_text;
}


