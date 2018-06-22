/*************************************************************************
	> File Name: test_09.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月21日 星期四 23时14分18秒
    > Description:  抛出异常, catch 子句与 try 块相关联的函数stats()
 ************************************************************************/

#include<iostream>
using namespace std;


int* stats(const int *ia, int size)
{
    int *pstats = new int[4];

    try{
        pstats[0] = sum_it(ia, size);
        pstats[1] = min_val(ia, size);
        pstats[2] = max_val(ia, size);
    }
    catch(string exceptionMsg)
        {
            /*处理异常*/
            cerr << "stats(): exception occured: "
                <<exceptionMsg
                <<"unable to stat aray"
                <<endl;
            delete []pstats;
            return 0;
        }
    catch(const statsException &statsExcp)
        {/*处理异常*/}

    pstats[3] = pstats[0] / size;
    do_something(pstats);

    return pstats;
}


