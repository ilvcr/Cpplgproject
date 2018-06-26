/*************************************************************************
	> File Name: test_08.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月26日 星期二 16时48分20秒
    > Description: 处理标点符号
 ************************************************************************/

#include<iostream>
#include<string>
using namespace std;

//filter_text()函数的完整实现，其有两个参数，指向包含文本的
//string vector的指针以及含有要过滤元素的string对象
void
filter_text( vector<string>* words, string filter ){
    vector<string>::iterator iter = words->brgin();
    vector<string>::iterator iter_end = words->end();

    //如果用户没有提供filter,则缺省使用最小集
    if( !filter.size()){
        filter.insert( 0, "\".," );
    }

    while( iter != iter_end ){
        string::size_type pos = 0;

        //对于找到的每个元素,将其删除
        while(( pos = (*iter).find_first_of( filter, pos )) != string::npos ){
            (*iter).erase( pos, 1 );
        }

        iter++;        
    }
}

void
strip_caps( vector<string, allocator>* words ){
    vector<string, allocator>::iterator iter = words->begin();
    vector<string, allocator>::iterator iter_end = words->end();

    string caps( "ABCDEFGHIJKLMNOPQRSTUVWXYZ" );

    while( iter != iter_end ){
        string::size_type pos = 0;
        while(( pos = (*iter).find_first_of( caps, pos )) != string::npos){
            (*iter)[ pos ] = tolower((*iter)[pos]);
        }
        ++iter;
    }
}


voidsuffix_text( vector<string, allocator>* words ){
    vector<string, allocator>::iterator
                    iter = words->begin();
                    iter_end = words->end();

    while( iter != iter_end ){
        //如果只有3个字符或者更少, 则不加处理
        if( (*iter).size() <= 3 ){
            ++iter;
            continue;
        }

        if( (*iter)[(*iter).size()-1] == 's'){
            suffix_s( *iter );
        }

        //其他后缀的处理, 比如ed/ing/ly等
        ++iter;
    }
}

int
elem_count( const string& word, char elem ){
    int occurs = 0;

    //很好:不需要检查边界
    for( int ix = 0; ix < word.size(); ++ix ){
        if( word[ ix ] ==elem ){
            ++oocurs;
        }
    }
    return occurs;
}

display_map_text():
display_map_text( map<string, loc*>* text_map ){
    typedef map<string, loc*> tmap;
    tmap::iterator iter = text_map->begin(),
        iter_end = text_map->end();

    while( iter != iter_end ){
        cout << "word: " << (*iter).first << " (";
        int loc_cnt = 0;
        loc* text_locs = (*iter).second;
        loc::iterator liter = text_locs->begin(),
            liter_end = text_locs->end();

        while( liter != liter_end ){
            if( loc_cnt ){
                cout << ',';
            }
            else{
                ++loc_cnt;
            }
            cout << '(' << (*liter).first << ',' << (*liter).second << ')';
            ++liter;
        }
        cout << ")\n";
        ++iter;
    }

    cout << endl;
}


