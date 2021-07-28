#include<bits/stdc++.h>
using namespace std;
int search(vector<int> &v,int key){
    int i=0;
    int j=v.size()-1;
    while(i<=j){
        int mid=(i+j)/2;
        if(v[mid]==key){
            return mid;
        }
        if(v[i]<=v[mid]){
            if(v[i]<=key && key<v[mid]) j=mid-1;
            else i=mid+1;
        }else{
            if(v[mid]<key && key<=v[j]) i=mid+1;
            else j=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> v{4,5,1,2,3};
    int key=2;
    cout<<search(v,key)<<endl;
    return 0;
}