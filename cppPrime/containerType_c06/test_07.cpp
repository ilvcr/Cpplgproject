/*************************************************************************
	> File Name: test_07.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月26日 星期二 11时38分10秒
    > Description:  将单词放入一个被称为 separate_words()的函数中，
                    除了把每个单词存储在字符串 vector 中之外还计算了每个单词的行列位置
 ************************************************************************/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

typedef pair<short, short> location;
typedef vector<location> loc;
typedef vector<string> text;
typedef pair<text*, loc*> text_loc;

text_loc*
separate_words( const vector<string>* text_file ){
    //words: 包含独立单词的集合
    // locations: 包含相关的行/列信息
    vector<string>* words = new vector<string>;
    vector<location>* locations = new vector<location>;
    short line_pos = 0;             //current line number

    //iterate through each line of text
    for( ; line_pos < text_file->size(); ++line_pos ){
        // textline: 待处理的当前文本行
        // word_pos: 文本行中的当前列位置
        short word_pos = 0;
        string textline = ( *text_file )[ line_pos ];
        string::size_type pos = 0, prev_pos = 0;

        while(( pos = textline.find_first_of( ' ', pos )) != string::npos ){
            //存储当前单词的字串
            words->push_back( textline.substr( prev_pos, pos - prev_pos ));
            //将行、列信息存储为pair
            locations->push_back( make_pair( line_pos, word_pos ));
            //为下一次迭代修改位置信息
            ++word_pos;
            prev_pos = ++pos;
        }

        //处理最后一个单词
        words->push_back( textline.substr( prev_pos, pos - prev_pos ));
        locations->push_back( make_pair( line_pos, word_pos ));
    }

    return new text_loc( words, locations );
}

int main(){
    vector<string>* text_fo;
    e = retroeve_text;
    text_loc* text_locations = separate_words( text_file );
    //.....
}



