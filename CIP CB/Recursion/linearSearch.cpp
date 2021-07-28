#include<bits/stdc++.h>
using namespace std;
int firstOcc(int *a,int n,int key){
    if(n==-1) return -1;
    if(a[n]==key) return n;
    return firstOcc(a,n-1,key);
}
int main(){
    int arr[]={1,65,2,5,6};
    int n=sizeof(arr)/sizeof(int);
    int key=6;
    cout<<firstOcc(arr,n-1,key)<<endl;
    return 0;
}