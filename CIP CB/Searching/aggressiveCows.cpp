#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        int n,c;
        cin>>n>>c;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int i=0;
        int j=arr[n-1];
        while(i<=j){
            int mid=i+(j-i)/2;
            int currC=1;
            int start=0;
            int currEnd=1;
            while(currEnd<n){
                if((arr[currEnd]-arr[start])>=mid){
                    currC++;
                    start=currEnd;
                }
                currEnd++;
            }
            if(currC>=c){
                ans=mid;
                i=mid+1;
            }else j=mid-1;
        }
        cout<<ans<<endl;
    }
}