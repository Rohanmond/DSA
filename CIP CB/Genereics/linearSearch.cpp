#include<bits/stdc++.h>
using namespace std;
template <typename T>
int search(T arr[],int n,T key){
    for(int i=0;i<n;i++){
        if(arr[i]==key) return i;
    }
    return n;
}
int main(){
    int arr[]={1,2,5,9,10};
    int key=4;
    int n=sizeof(arr)/sizeof(int);
    cout<<"The element present at "<<search(arr,n,key)<<endl;

    float arr1[]={1.1,1.5,1.6};
    n=sizeof(arr)/sizeof(float);
    float Key=1.5;
    cout<<"The element of float array is present at:"<<search(arr1,n,Key)<<endl;
    return 0;
}