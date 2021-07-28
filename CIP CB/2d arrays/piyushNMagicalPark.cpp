#include<bits/stdc++.h>
using namespace std;
void check(vector<vector<char>> &v,int k,int s){
    int m=v.size();
    int n=v[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            char ch=v[i][j];
            if(s<k) {
                cout<<"No"<<endl;
                return;
            }
            if(ch=='.'){
                s-=2;
            }else if(ch=='*'){
                s+=5;
            }else{
                break;
            }
            if(j!=n-1) s--;
        }
    }
    cout<<"Yes"<<endl;
    cout<<s<<endl;
}
int main(){
    // vector<vector<char>> v{
    //     {'.','.','*','.'},
    //     {'.','#','.','.'},
    //     {'*','*','.','.'},
    //     {'.','#','*','*'}
    //     };
    // bool res=check(v,5,20);
    // cout<<res<<endl;
    int m,n,k,s;
    cin>>m>>n>>k>>s;
    vector<vector<char>> v;
    for(int i=0;i<m;i++){
        vector<char> temp;
        for(int j=0;j<n;j++){
            char c;
            cin>>c;
            temp.push_back(c);
        }
        v.push_back(temp);
    }
    check(v,k,s);
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;    
}