#include<bits/stdc++.h>
using namespace std;
int merge(vector<int> &v,int i,int mid,int j){
    int count=0;
    int a=i;
    int b=mid+1;
    vector<int> temp;
    while (a<=mid && b<=j)
    {
        if(v[a]>v[b]){
            count+=mid-a+1;
            temp.push_back(v[b]);
            b++;
        }else {
            temp.push_back(v[a]);
            a++;
        }
    }
    while (a<=mid)
    {
        temp.push_back(v[a]);
        a++;
    }
    while (b<=j)
    {
        temp.push_back(v[b]);
        b++;
    }
    for(int k=i;k<=j;k++){
        v[k]=temp[k-i];
    }
    return count;
}
int mergeSort(vector<int> &v,int i,int j){
    if(i>=j) return 0;
    int mid=(i+j)/2;
    int leftSide=mergeSort(v,i,mid);
    int rightSide=mergeSort(v,mid+1,j);
    int merging=merge(v,i,mid,j);
    return leftSide+rightSide+merging;
}
int main(){
    vector<int> v{1,5,2,6,3,0};
    int n=v.size()-1;
    cout<<mergeSort(v,0,n)<<endl;
    return 0;
}