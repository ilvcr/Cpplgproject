/*************************************************************************
> File Name: test_08.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月18日 星期三 13时09分00秒
> Description: 
 ************************************************************************/

#include<iostream>
#include<cstddef>
using namespace std;

class Screen{
public:
    void* operator new(size_t);
    void operator delete(void*, size_t);
    //....
private:
    Screen* next;
    static Screen* freeStore;
    static const int screenChunk;
};


//静态成员在程序文本文件中被初始化,而不是头文件中
Screen* Screen::freeStore = 0;
const int Screen::screenChunk = 24;

void* Screen::operator new(size_t size){
    Screen* p;
    if(!freeStore){
        // 链表空: 抓取一块存储区
        // 这里调用全局 new
        size_t chunk = screenChunk * size;
        freeStore = p = reinterpret_cast<Screen*>(new char[chunk]);

        //现在把已经分配的内存串起来
        for(; p!=&freeStore[screenChunk - 1]; ++p){
            p->next = p+1;
            p->next = 0;
        }
    }
        p = freeStore;
        freeStore = freeStore->next;
        return p;
}


void Screen::operator delete(void* p, size_t){
    // 将被删除的对象插入到空闲链表尾
    (static_cast<Screen*>(p))->next = freeStore;
    freeStore = static_cast<Screen*>(p);
}




