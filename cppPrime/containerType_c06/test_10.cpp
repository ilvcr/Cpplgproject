/*************************************************************************
	> File Name: test_10.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月26日 星期二 21时11分09秒
    > Description:
 ************************************************************************/

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<utility>
#include<map>
#include<set>
#include<fstream>
#include<stddef.h>
#include<ctype.h>
using namespace std;

class TextQuery{

public:
    TextQuery(){ memset(this, 0, sizeof( TextQuery )); }
    static void filter_elements( string felems ){
        filt_elems = felems;    
    }
    void query_text();
    void display_map_text();
    void dis_text_locations();
    void doit(){
        retrieve_text();
        separate_words();
        filter_text();
        suffix_text();
        strip_caps();
        build_word_map();
    }

private:
    void retrieve_text();
    void separate_words();
    void filter_text();
    void strip_caps();
    void suffix_text();
    void suffix_s( string& );
    void build_word_map();

private:
    vector<string, allocator>* lines_of_text;
    text_loc *text_locations;
    map<string, loc*, less<string>, allocator>* word_map;
    static string filt_elems;
};

string TextQuery::filt_elems( "\",.;:!<< )(\\/" );

int main(){
    TextQuery tq;
    tq.doit();
    tq.query_text();
    tq.display_map_text();
}

void TextQuery::
retrieve_text(){
    string file_name;
    cout << "please enter file name: ";
    cin >> file_name;
    
    ifstream infile( file_name.c_str(), ios::in );
    if( !infile ){
        cerr << "oops! unable to open file "
            << file_name << " --bailing out!\n";
        exit(-1);
    }
    else{
        cout << "\n";
    }
    lines_of_text = new vector<string, allocator>;
    string textline;
    while( getline( infile, textline, '\n' )){
        lines_of_text->push_back( textline );
    }
}

void TextQuery::
separate_words(){
    vector<string, allocator>* words = new vector<string, allocator>;
    vector<location, allocator>* location = new vector<location, allocator>;

    for( short line_pos = 0; line_pos < line_of_text->size(); line_pos++ ){
        short word_pos = 0;
        string textline = (*lines_of_text)[line_pos];
        string::size_type eol = textline.length();
        string::size_type pos = 0, prev_pos = 0;

        while((pos = textline.find_first_of(' ', pos)) != string:npos){
            words->push_back( textline.substr( prev_pos, pos - prev_pos) );
            location->push_back(make_pair( line_pos, word_pos ));
            word_pos++;
            pos++;
            prev_pos = pos;
        }
        word_>push_back( textline.substr( prev_pos, pos - prev_pos ));
        locations->push_back( make_pair(line_pos, word_pos));
    }
    text_locations = new text_loc( words, locations );
}

