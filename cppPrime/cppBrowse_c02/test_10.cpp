/*************************************************************************
	> File Name: test_10.cpp
	> Author: @Yoghourt->ilvcr, Cn,Sx,Ty
	> Mail: ilvcr@outlook.com || liyaoliu@foxmail.com
	> Created Time: 2018年06月21日 星期四 23时30分40秒
    > Description:  将泛型算法应用到vector类对象上
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int ia[10] = {51, 23, 7, 88, 41, 98, 12, 103, 37, 6};

int main()
{
    vector<int> vec(ia, ia+10);

    //排序数组
    sort(vec.begin(), vec.end());

    //获取值
    int search_value;
    cin >> search_value;

    //搜索元素
    vector<int>::iterator found;
    found = find(vec.begin(), vec.end(), search_value);
    if(found != vec.end())
        cout << "search_value found!\n";
    else cout << "search_value not found!\n";

    //反转数组
    reverse(vec.begin(), vec.end());

    return 0;
}
