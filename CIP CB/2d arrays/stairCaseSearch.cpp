#include<bits/stdc++.h>
using namespace std;
bool stairCaseSearch(vector<vector<int>> &v,int key){
    int m=v.size();
    int n=v[0].size();
    int i=0;
    int j=n-1;
    while(i<m && j>=0){
        int curr=v[i][j];
        if(curr==key) return true;
        if(key>curr) i++;
        else j--;
    }
    return false;
}
int main(){
    vector<vector<int>> v{
        {1,4,8,10},
        {2,5,9,15},
        {6,16,18,20},
        {11,17,19,23}
    };
    bool res=stairCaseSearch(v,17);
    bool res1=stairCaseSearch(v,12);
    cout<<res<<":"<<res1<<endl;
    return 0;
}