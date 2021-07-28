#include<bits/stdc++.h>
using namespace std;
void sieve(vector<int> &v){
    v[0]=0;
    v[1]=0;
    for(int i=2;i*i<v.size();i++){
        if(v[i]){
            for(int j=i*i;j<v.size();j+=i){
                v[j]=0;     
            }
        }
    }
}
int main(){
    int i=1e6+2;
    vector<int> v(i,1);
    sieve(v);
    vector<int> prefix(i,0);
    prefix[0]=v[0];
    for(int j=1;j<i;j++){
        prefix[j]=v[j]+prefix[j-1];
    }
    // for(int i=0;i<26;i++) cout<<i<<":"<<v[i]<<":"<<prefix[i]<<endl;
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        int res=prefix[b];
        if(a) res-=prefix[a-1];
        cout<<res<<endl;
    }
    return 0;
}