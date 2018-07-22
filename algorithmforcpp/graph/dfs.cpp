/*************************************************************************
> File Name: dfs.cpp
> Author: yoghourt->ilvcr 
> Mail: liyaoliu@foxmail.com  @@  ilvcr@outlook.com 
> Created Time: 2018年07月22日 星期日 15时42分01秒
> Description: 
 ************************************************************************/

#include<iostream>
#include<bits/stdc++.h>
using namespace std

int v = 4;
void DFSUtil_(int graph[4][4], bool visited[], int s){
    visited[s] = true;
    cout << s << " ";
    for(int i=0; i < v; i++){
        if(graph[s][i] == 1 && visited[i] == false){
            DFSUtil_(graph, visited, i);
        }
    }
}

void DFS_(int geaph[4][4], int s){
    bool visited[v];
    memset(visited, 0, sizeof(visited));
    DFSUtil_(graph, visited, s);
}

int main(int argc, char* argv[]){
    int graph[4][4] = {{0,1,1,0},{0,0,1,0},{1,0,0,1},{0,0,0,1}};
    cout<<"DFS: ";
    DFS_(graph,2);
    cout<<endl;

    return 0;
}



