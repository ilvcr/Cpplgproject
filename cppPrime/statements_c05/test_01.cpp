/*************************************************************************
	> File Name: test_01.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月25日 星期一 12时47分03秒
    > Description:  声明语句用// #n 编号,这里 n 从 1 开始计数
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string fileName;        //#1

    cout << "Please enter name of file to open: ";
    cin >> fileName;

    if( fileName.empty() ){
        cerr << "fileName is empty(). bailing out. bye!\n";
        return -1;
    }

    ifstream inFile( fileName.c_str() );        //#2
    if( !inFile ){
        cerr << "unable to open file.bailing out.bye!\n";
        return -2;
    }

    string inBuf;           //#3
    vector<string>text;     //#4
    while( inFile >> inBuf ){
        for(int ix = 0; ix < inBuf.size(); ++ix)    //#5
        //ch为非必须选项
        if(( char ch = inBuf[ix] ) == '.'){         //#6
            ch = '_';
            inBuf[ix] = ch;
        }
        text.push_back( inBuf );
    }

    if( text.empty() )
        return 0;

    //一条声明语句，有两个定义
    vector<string>::iterator iter = text.begin(),
    iend = text.end();

    while( iter != iend ){
        cout << *iter << '\n';
        ++iter;
    }

    return 0;
}


