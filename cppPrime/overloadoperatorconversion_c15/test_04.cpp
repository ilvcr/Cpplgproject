/*************************************************************************
> File Name: test_04.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月18日 星期三 12时16分16秒
> Description: 
 ************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef vector<int>::iterator iter_type;

class absInt{
public:
    int operator()( int val ){
        int result = val < 0 ? -val : val;
        return result;
    }
};

//https://blog.csdn.net/xgf415/article/details/52966475/


int main(int argc, char* argv[]){
    int ia[] = { - 0, 1, - 1, - 2, 3, 5, - 5, 8 };
    vector<int>ivec(ia, ia+8);

    // 把 ivec 的每个元素设置为其绝对值
    transform(ivec.begin(), ivec.end(), ivec.begin(), absInt());
}

//transform() 的实例把操作 absInt 应用到 int 型,vector 的所有元素上
iter_type transform(iter_type iter, iter_type last, iter_type result, absInt func){

    while(iter != last){
        *result++ = func(*iter++); //调用 absInt::operator()
    }

    return iter;
}


