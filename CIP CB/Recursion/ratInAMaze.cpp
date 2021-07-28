#include<bits/stdc++.h>
using namespace std;
void rim(vector<vector<int>> &v,int i,int j,int m,int n){
    if(i==m-1 && j==n-1){
        v[i][j]=1;
        for(int a=0;a<m;a++){
            for(int b=0;b<n;b++) cout<<v[a][b]<<" ";
            cout<<endl;
        }
        cout<<endl;
        return;
    }
    if(i<m && j<n){
       if(v[i][j]==8) return;
       v[i][j]=1;
       rim(v,i,j+1,m,n);
       rim(v,i+1,j,m,n);
       v[i][j]=0;
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> v;
    for(int i=0;i<m;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            int item;
            cin>>item;
            temp.push_back(item);
        }
        v.push_back(temp);
    }
    rim(v,0,0,m,n);
    return 0;
}