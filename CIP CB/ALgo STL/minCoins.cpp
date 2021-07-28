#include<bits/stdc++.h>
using namespace std;
// int lower_bound(int arr[],int n,int target){
//     int ans;
//     int l=0;
//     int r=n-1;
//     while(l<=r){
//         int mid=(l+r)/2;
//         if(arr[mid]<=target){
//             ans=arr[mid];
//             l=mid+1;
//         }else r=mid-1;
//     }
//     return ans;
// }
bool compare(int a,int b){
    return a<=b;
}
int main(){
    int arr[]={1,2,5,10,20,50,100,500,2000};
    int n=sizeof(arr)/sizeof(int);
    int target;
    cin>>target;
   while(target){
        auto it=lower_bound(arr,arr+n,target,compare)-arr-1;
        int currO=arr[it];
        cout<<currO<<",";
        target-=currO;
   }
    return 0;
}