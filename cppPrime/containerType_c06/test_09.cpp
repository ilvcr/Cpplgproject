/*************************************************************************
	> File Name: test_09.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月26日 星期二 20时24分26秒
    > Description:  怎样创建、查找和迭代一个 map。该程序使用了两个 map，而单词
                        转换 map 拥有两个 string 类型的元素。
                            键（key） 代表要求特殊处理的单词，表示我们遇到
                                该词时应该采用怎样的转换。为简单起见我们把 
                                    map 的所有项都固定写在代码.
                    为了泛化该程序，使其从标准输入或指定的文件读入“单词/转换”
            我们的统计 map 保存了被执行的转换的使用统计信息。
    程序如下：
 ************************************************************************/

#include<iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;

int main(){
    map<string, string> trans_map;
    typedef map<string, string>::value_type valType;

    //1.将转换对固定写在代码中
    trans_map.insert( valType( "gratz", "grateful" ));
    trans_map.insert( valType( "em", "them" ));
    trans_map.insert( valType( "cuz", "because" ));
    trans_map.insert( valType( "nah", "no" ));
    trans_map.insert( valType( "sez", "says" ));
    trans_map.insert( valType( "tanx", "thanks" ));
    trans_map.insert( valType( "wuz", "was" ));
    trans_map.insert( valType( "pos", "suppose" ));

    //显示trans_map
    map<string, string>::iterator it;
    cout << "Here is our transformation map: \n\n";
    for( it = trans_map.begin(); it !=trans_map.end(); ++it ){
        cout << "key: " << (*it).first << "\t" << "value: " 
                << (*it).second << "\n";
    }
    cout << "\n\n";

    //2.固定写入文字
    string textarray[14] = { "nah", "I", "sez", "tanx", "cuz", "I",
                        "wuz", "pos", "to", "not", "cuz", "I", "wuz", "gratz"};
    vector<string> text( textarray, textarray+14 );
    vector<string>::iterator iter;

    //显示text
    cout << "Here is our original string vecto: \n\n";
    int cnt = 1;
    for( iter - text.begin(); iter != text.end(); ++iter, ++cnt ){
        cout << *iter << ( cnt % 8 ? " ": "\n");
    }
    cout << "\n\n\n";

    //包含统计信息的map--动态生成
    map< string, int > stats;
    typedef map<string, int>::value_type statsValType;

    //真正的map工作--程序的核心
    for(iter = text.begin(); iter != text.end(); ++iter){
        if((it = trans_map.find( *iter )) != trans_map.end()){
            if( stats.count( *iter )){
                stats[*iter] += 1;
            }
            else{
                stats.insert(statsValType(*iter, 1));
                *iter = (*it).second;
            }
        }
    }

    //显示被转换后的vector
    cout << "Here is our transformed string vector: \n\n";
    cnt = 1;
    for( iter = text.begin(); iter != text.end(); ++iter, ++cnt ){
        cout << *iter << (cnt % 8 << " " : "\n");
    }
    cout << "\n\n\n";

    //对统计map进行迭代
    cout << "Finally, here are our statistics: \n\n";
    map<string, int, less<string>,allocator>::iterator siter;
    for( siter = stats.begin(); siter != stats.end(); ++siter ){
        cout << (*siter).first << " "
            << " was transformed "
            << (*siter).second
            <<((*siter).second == 1 << " time\n" : " times\n" );
    }
}


