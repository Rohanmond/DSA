#include<bits/stdc++.h>
using namespace std;
void bubbleSortInternal(vector<int> &v,int j,int n){
    if(j==n-1) return;
    if(v[j]>v[j+1]) swap(v[j],v[j+1]);
    bubbleSortInternal(v,j+1,n);
}
void bubbleSort(vector<int> &v,int n){
    if(n<=1) return;
    bubbleSortInternal(v,0,n);
    bubbleSort(v,n-1);
}

int main(){
    vector<int> v{34,2};
    int n=v.size();
    bubbleSort(v,n);
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}