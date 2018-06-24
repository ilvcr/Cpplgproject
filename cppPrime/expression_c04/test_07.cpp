/*************************************************************************
	> File Name: test_07.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月25日 星期一 00时19分51秒
    > Description:  从栈中弹出最后两项，然后再次显示栈中的内容
 ************************************************************************/

#include<iostream>
#include"iStack.h"
using namespace std;

int main()
{
    iStack stack(32);

    stack.display();

    for(int ix=1;ix<51;++ix){
        if(ix%2==0)
            stack.push(ix);
        
        if(ix%5==0)
            stack.display();

        if(ix%10==0){
            int dummy;
            stack.pop(dummy);
            stack.pop(dummy);
            stack.display();
        }
    }
}


