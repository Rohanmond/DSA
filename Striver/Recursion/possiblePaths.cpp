#include<bits/stdc++.h>
using namespace std;
void print(int i,int j,int m,int n,vector<pair<int,int>> &paths){
    if(i==m-1 && j==n-1){
        for(auto it:paths){
            cout<<it.first<<":"<<it.second<<"<-";
        }
        cout<<i<<":"<<j<<endl;
        return;
    }
    if(i>=m || j>=n) return;
    paths.push_back({i,j});
    print(i,j+1,m,n,paths);
    print(i+1,j,m,n,paths);
    paths.pop_back();
}
int main(){
    vector<pair<int,int>> paths;
    print(0,0,3,2,paths);
    return 0; 
}