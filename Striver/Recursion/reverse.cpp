#include<bits/stdc++.h>
using namespace std;
void reverse(vector<int>&v,int i,int j){
    if(i<j){
        swap(v[i],v[j]);
        reverse(v,i+1,j-1);
    }
}
int main(){
    vector<int> v{1,2,3,4};
    reverse(v,0,v.size()-1);
    for(auto it:v) cout<<it<<" ";
    cout<<endl;
    return 0;
}