/*************************************************************************
	> File Name: test_12.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月27日 星期三 13时16分05秒
    > Description:  对于multimap和multiset的一种迭代策略为
                    使用有find()返回iterator和由count()返回的值
 ************************************************************************/

#include<iostream>
#include<map>
#include<set>
#include<string>
using namespace std;

void code_fragment_strategy1(){
    multimap<string, string> authors;
    string search_item( "Alain de Botton" );

    //...
    int number = authors.count( search_item );
    multimap<string, string>::iterator iter;
    iter = authors.find( search_item );
    for( int cnt = 0; cnt < number; ++cnt, ++iter ){
        do_something( *iter );
    }

    //....
}

//更好策略是使用由 multiset 和 multimap 的特殊操作 equal_range()返回的 iterator 对值。
//如果这个值存在，则第一个 iterator 指向该值的第一个实例，且第二个 iterator 指向这个值
//的最后实例的下一位置。如果最后的实例是 multiset 的末元素 则第二个 iterator 等于 end().
#include<utility>
void code_fragment_strategy2(){
    multimap<string, string> authors;
    //...
    string search_item( "Haruki Murakami" );
    while(cin&&cin>>search_item){
        switch(authors.count(search_item)){
            //不存在，继续
            case 0:
                break;

            //只有一项，使用普通的find()操作
            case 1:{
                multimap<string, string>::iterator iter;
                iter = authors.find( search_item );
                //do something with element
                break;
            }

            //出现多项
            default:{
                typedef multimap<string, string>::iterator iterator;
                pair<iterator, iterator> pos;

                //pos.first指向第一个出现
                //pos.second指向值不再出现的位置
                pos = authors.equal_range( search_item );
                for(; pos.first != pos.second; ++pos.first){
                    //对每个元素进行操作
                }
            }
        }
    }
}


