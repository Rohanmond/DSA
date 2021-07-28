#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(int);
    //rotate(arr,arr+2,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    while(next_permutation(arr,arr+n)){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}