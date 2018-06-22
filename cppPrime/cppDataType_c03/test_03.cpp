/*************************************************************************
	> File Name: test_03.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月22日 星期五 14时15分42秒
    > Description: C-style characters string implementation
 ************************************************************************/

#include<iostream>
#include<cstring>
using namespace std;

int main(int argc, char * argv[])
{
    int errors = 0;
    const char *pc = "a very long literal string";
    for( int ix=0; ix < 1000000; ++ix )
    {
        int len = strlen( pc );
        char *pc2 = new char[ len + 1 ];
        strcpy( pc2, pc );
        if( strcmp( pc2, pc ))
        {
            ++errors;
        }
        delete []pc2;
    }
    cout << "C-style characters strings: "
        << errors << " errors occurred.\n";

    return 0;
}

