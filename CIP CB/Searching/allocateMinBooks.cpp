#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int res=0;
    int arr[n];
    int l=INT_MIN;
    int r=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        l=max(l,arr[i]);
        r+=arr[i];
    }
    while(l<=r){
        int mid=(l+r)/2;
        int currC=0;
        int k=0;
        int boyC=1;
       for(int i=0;i<n;i++){
           if((currC+arr[i])<=mid){
               currC+=arr[i];
           }else{
               boyC++;
               currC=arr[i];
           }
       }
        if(boyC<=m) {
            res=mid;
            r=mid-1;
        }else l=mid+1;
    }
    cout<<res<<endl;
    return 0;

}