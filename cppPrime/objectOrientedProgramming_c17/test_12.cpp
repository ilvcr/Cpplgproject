/*************************************************************************
> File Name: test_12.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月24日 星期二 12时12分42秒
> Description: 
 ************************************************************************/

#include<iostream>
using namespace std;

inline void TextQuery::
build_text_map(){
    retrieve_text();
    separate_words();
    filter_text();
    suffix_text();
    strip_caps();
    build_word_map();
}

void TextQuery::
query_text(){
    /* 局部对象:
     *
     * text: 按顺序存放查询中的每个单词
     * query_text: 保存用户查询的 vector
     * caps: 支持 "把大写转换为小写" 的过滤器
     *
     * user_query : UserQuery 对象,
     *
     * 封装了用户查询的实际计算过程
     */
    string text;
    string caps("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    vector<string, allocator> query_text;
    UserQuery user_query;

    //初始化 UserQuery 的静态数据成员
    NotQuery::all_locs(text_locations->second);
    AndQuery::max_col(&line_cnt);
    UserQuery::word_map(word_map);

    do{
        //如果有的话, 删除以前的查询
        query_text.clear();
        cout << "Enter a query - please separate each item "
             << "by a space.\n"
             << "Terminate query (or session) "
             << "with a dot( . ).\n\n"
             << "==> ";

        /*
         * 从标准输入获取查询,
         * 删除所有的大写字母
         * 大量输入 query_text ...
         *
         * 注意: 应该完成用户查询的所有处理
         */
        while(cin >> text){
            if(text == "."){
                break;
            }
            string::size_type pos = 0;
            while((pos = text.find_first_of(caps, pos)) != string::mpos){
                text[pos] = tolower(text[pos]);
            }
            query_text.push_back(text);
        }

        // ok: 如果有查询, 处理它...
        if(!query_text.empty()){
            // 把查询传递给 UserQuery 对象
            user_query.query(&query_text);

            // 计算 UserQuery
            // 返回 Query* 层次结构
            // query 是 TextQuery 的 Query* 成员
            query = user_query.eval_query();

            // 计算 Query 层次结构
            query->eval();

            // ok: 显示结果
            // 一个 TextQuery 成员函数
            display_solution();

            // 在用户终端上给出额外一行
            cout << endl;
        }
    }while(!query_text.empty());

    cout << "Ok, bye!\n";
}


