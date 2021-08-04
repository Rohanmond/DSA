#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    list<int> nbrs;
    Node(int value){
        this->value=value;
    }
};
class Graph{
    unordered_map<int,Node*> um;
    public:
    Graph(vector<int> v){
        for(auto it:v){
            um[it]=new Node(it);
        }
    }
    void addEdge(int a,int b,bool undi=true){
        um[a]->nbrs.push_back(b);
        if(undi){
            um[b]->nbrs.push_back(a);
        }
    }
    void bfs(){
        
    }
};