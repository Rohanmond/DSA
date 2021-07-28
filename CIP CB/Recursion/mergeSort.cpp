#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &v,int i,int mid,int j){
    int a=i;
    int b=mid+1;
    vector<int> temp;
    while(a<=mid && b<=j){
        if(v[a]<v[b]) temp.push_back(v[a++]);
        else temp.push_back(v[b++]);
    }
    while(a<=mid) temp.push_back(v[a++]);
    while(b<=j) temp.push_back(v[b++]);
    for(int k=0;k<temp.size();k++){
        v[k+i]=temp[k];
    }
}
void mergeSort(vector<int> &v,int i,int j){
    if(i<j){
        int mid=(i+j)/2;
        mergeSort(v,i,mid);
        mergeSort(v,mid+1,j);
        merge(v,i,mid,j);
    }
}


int main(){
    vector<int> v{456,356,2};
    mergeSort(v,0,v.size()-1);
    for(int i:v) cout<<i<<" ";
    cout<<endl;
    return 0;

}