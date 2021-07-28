#include<bits/stdc++.h>
using namespace std;
int count(int n,vector<int> &v){
    int size=v.size();
    int i=1;
    int totalSum=0;
    while(i<(1<<size)){
        int temp=i;
        int k=0;
        int count=0;
        int product=1;
        while(temp){
            if(temp&1) {
                count++;
                product=product*v[k];
            } 
            k++;
            temp=temp>>1;
        }
        if(count&1) totalSum+=(n/product);
        else totalSum-=(n/product);
        i++;
    }
    return totalSum;
}
int main(){
    vector<int> v{2,3,5};
    int n=999;
    cout<<count(n,v)<<endl;
    return 0;
}