#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &v,int i,int j){
    int pivot=v[j];
    int a=i-1;
    for(int b=i;b<j;b++){
        if(v[b]<=pivot){
            a++;
            swap(v[a],v[b]);
        }
    }
    swap(v[++a],v[j]);
    return a;
}
int quickSelect(vector<int> &v,int i,int j,int k){
    if(i>j) return -1;
    int p=partition(v,i,j);
    // cout<<p<<endl;
    if(p==k) return v[p];
    if(p<k) quickSelect(v,p+1,j,k);
    else quickSelect(v,i,p-1,k);
}
int main(){
    vector<int> v{10,5,2,0,7,6,4};
    int n=v.size();
    int k=9;
    cout<<quickSelect(v,0,n-1,k)<<endl;
    return 0;
}