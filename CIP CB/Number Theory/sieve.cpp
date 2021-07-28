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
    for(int i=0;i<26;i++){
        cout<<i<<":"<<v[i]<<endl;
    }
    return 0;
}