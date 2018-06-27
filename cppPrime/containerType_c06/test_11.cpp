/*************************************************************************
	> File Name: test_11.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月27日 星期三 13时12分51秒
    > Description: 要使用multimap和muliset需包含相关的map和set的头文件
 ************************************************************************/

#include<iostream>
using namespace std;

#include<map>
multimap<key_type, value_type> multimapName;

//按string索引, 存有list<string>
multimap<string, list<string>> synonyms;

#include<set>
muliset<type> mulisetName;


