/*************************************************************************
> File Name: test_09.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月16日 星期一 00时05分10秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

class List{
public:
    int init(int);

private:
    class ListItem{
    public:
        ListItem(int val=0);
        void mf(const List&);
        int value;
        int memb;
    };
};

List::ListItem::ListItem(int val){
    // List::init() 是类 List 的非静态成员
    // 必须通过 List 类型的对象或指针来使用
    value = init(val);     // 错误: 非法使用 init
}


