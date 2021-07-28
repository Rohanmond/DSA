#include<bits/stdc++.h>
using namespace std;
int maxZ(vector<vector<int>> &v){
    int row=v.size();
    int col=v[0].size();
    int resI=row;
    int minJ=col;
    int i=0;
    int j=col-1;
    while(j>=0 && i<row){
        if(v[i][j]){
            i++;
        }else{
            j--;
            if(j<minJ){
                minJ=j;
                resI=i;
            }
        }
    }
    return resI;
}
int main(){
    vector<vector<int>> v{{1,1,1,1,0},{1,0,0,0,0},{1,1,1,1,1},{1,1,1,0,0}};
    int res=maxZ(v);
    cout<<res<<endl;
    return 0;
}
