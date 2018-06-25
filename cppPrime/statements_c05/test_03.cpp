/*************************************************************************
	> File Name: test_03.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月25日 星期一 13时27分28秒
    > Description:  给程序增加default使其可以记录辅音字母
 ************************************************************************/

#include<iostream>
#include<ctype.h>
using namespace std;

int main(){
    char ch;
    int aCnt = 0, eCnt 0, iCnt = 0, oCnt = 0, uCnt = 0;
    int consonantCnt = 0;

    while( cin >> ch ){
        switch ( ch ){
            case 'a': case 'A':
                ++aCnt;
                break;
            case 'e': case 'E':
                ++eCnt;
                break;
            case 'i': case 'I':
                ++iCnt;
                break;
            case 'o': case 'O':
                ++oCnt;
                break;
            case 'u': case 'U':
                ++uCnt;
                break;
            default:
                if( isalpha( ch )){
                    ++consonantCnt;
                }
                break;
        }
    }

    cout << "Number of vowel a: \t" << aCnt << '\n'
        << "Number of vowel e: \t" < eCnt << '\n'
        << "Number of vowel i: \t" < iCnt << '\n'
        << "Number of vowel o: \t" < oCnt << '\n'
        << "Number of vowel u: \t" < uCnt << '\n'
        << "Number of consonantCnt: \t" << consonantCnt << '\n';

    return 0;
}
