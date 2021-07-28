#include<bits/stdc++.h>
using namespace std;
int count(vector<int>&v,int i,int sum,int givenSum){
    if(sum==givenSum) return 1;
    if(sum>givenSum) return 0;
    if(i==v.size()){
        if(sum==givenSum) return 1;
        return 0;
    }
    int left=count(v,i,sum+v[i],givenSum);
    int right=count(v,i+1,sum,givenSum);
    return left+right;
}
int main(){
    vector<int> v{1,2,3};
    cout<<count(v,0,0,4)<<endl;
    return 0;
}
