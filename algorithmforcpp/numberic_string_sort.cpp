/*************************************************************************
> File Name: numberic_string_sort.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月17日 星期二 14时35分32秒
> Description: 
    Using general algorithms to sort a collection of strings results in alphanumeric sort.
    If it is a numeric string, it leads to unnatural sorting
    
    eg, an array of strings 1,10,100,2,20,200,3,30,300
    would be sorted in that same order by using conventional sorting,
    even though we know the correct sorting order is 1,2,3,10,20,30,100,200,300
    
    This Programme uses a comparator to sort the array in Numerical order instead of Alphanumeric order
 ************************************************************************/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool NumericSort(string a, string b){

    while(a[0] == '0'){
        a.erase(a.begin());
    }
    while(b[0] == '0'){
        b.erase(b.begin())
    }

    int n = a.length();
    int m = b.length();

    if(n == m){
        return a < b;
    }

    return n < m;
}

int main(int argc, char* argv[]){
    int n;
    cout << "Enter number of elements to be sorted Numberically\n";
    cin >> n;

    vector<string> v(n);
    cout << "Enter the string of numbers\n";
    for(int i=0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    cout < "Elements sorted normally \n";
    for(int i=0; i < n; i++){
        cout << v[i] << " ";
    }
    cout << "\n";

    sort(v.begin(), v.end(), Numberically);
    cout << "Elements sorted Numerically \n";
    for(int i=0; i < n; i++){
        cout << v[i] << " ";
    }

    return 0;
}


