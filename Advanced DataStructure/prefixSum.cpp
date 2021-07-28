#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> v(n+2,0);
    while(m--){
        int a,b,k;
        cin>>a>>b>>k;
        v[a]+=k;
        v[b+1]-=k;
    }
    vector<int> prefix(n+2,0);
    int maxi=0;
    prefix[0]=v[0];
    for(int i=1;i<n+2;i++){
        prefix[i]=v[i]+prefix[i-1];
        maxi=max(maxi,prefix[i]);
    }
    cout<<maxi<<endl;
    return 0;
}