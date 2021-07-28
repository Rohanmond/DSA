#include<bits/stdc++.h>
using namespace std;
vector<int> ArraySub(vector<int> &v,int k){
    deque<int> d;
    int maxi=INT_MIN;
    for(int i=0;i<k;i++){
        maxi=max(v[i],maxi);
    }
    d.push_back(maxi);
    for(int i=k;i<v.size();i++){
        maxi=max(v[i],maxi);
        d.push_back(maxi);
    }
    vector<int> res;
    while(!d.empty()){
        res.push_back(d.front());
        d.pop_front();
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++) cin>>v[i];
    int k;
    cin>>k;
    vector<int> res=ArraySub(v,k);
    for(auto it:res) cout<<it<<" ";
    cout<<endl;  
    return 0;
} 