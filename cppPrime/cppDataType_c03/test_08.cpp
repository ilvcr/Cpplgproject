/*************************************************************************
	> File Name: test_08.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月22日 星期五 15时57分01秒
    > Description:  程序练习 String 类的实现,它从标准输入读入一个 
                    String 序列,然后再顺序访问 String 并记录出现的元音字母
 ************************************************************************/

#include<iostream>
#include"String.h"
using namespace std;

int main()
{
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0,
        theCnt = 0, itCnt = 0, wdCnt = 0, notVowel = 0;
    
    //为了使用operator==( const char* )
    //不定义The("The")和It("it")
    String buf, the( "the" ), it( "it" );
    
    //调用operator>>( istream&, String& )
    while( cin >> buf ){
        ++wdCnt;

        //调用operator<<( ostream&, const String& )
        cout << buf << ' ';
        if( wdCnt % 12 == 0 ){
            cout << endl;
        }

        //调用String::operator==(const String& ) and
        //      String::operator==( const char* )
        if( buf == the || buf == "The" ){
            ++theCnt;
        }
        else{
            if( buf == it || buf == "It" )
                ++itCnt;
        }

        //调用String::size()
        for( int ix = 0; ix < buf.size(); ++ix )
        {
            //调用String::operator[](int)
            switch( buf[ ix ] )
            {
                case 'a':case'A': ++aCnt; break;
                case 'e':case'E': ++eCnt; break;
                case 'i':case'I': ++iCnt; break;
                case 'o':case'O': ++oCnt; break;
                case 'u':case'U': ++uCnt; break;
                default:++notVowel; break;
            }
        }
    }

    //调用operator<<( ostream&, const String& )
    cout << "\n\n"
        <<"Words read: " << wdCnt << "\n\n"
        <<"the/The: "    << theCnt << '\n'
        <<"it/It: "      << itCnt << "\n\n"
        <<"non-vowels read: " << notVowel << "\n\n"
        <<"a: " << aCnt << '\n'
        <<"e: " << eCnt << '\n'
        <<"i: " << iCnt << '\n'
        <<"o: " << oCnt << '\n'
        <<"u: " << uCnt << endl;
}
