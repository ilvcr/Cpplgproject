/*************************************************************************
	> File Name: test_04.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月21日 星期四 21时00分39秒
    > Description:  程序从一个名为 in_file 的文本文件中读取单词,然后把每个词写到一个名为 
                    out_file 的输出文件中并且每个词之间用空格分开
 ************************************************************************/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream outfile("out_file");
    ifstream infile("in_file");

    if( !infile )
    {
        cerr << "eror: unable to open input file\n";
        return -1;
    }
    if( !outfile )
    {
        cerr <<"error: unable to open output file!\n";
        return -2;
    }

    string word;
    while( infile >> word )
        outfile << word << ' ';

    return 0;
}


