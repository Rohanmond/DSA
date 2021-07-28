#include<bits/stdc++.h>
using namespace std;
int fast(int base,int n){
    int ans=1;
    while(n){
        if(n&1) ans*=base;
        base=base*base;
        n=n>>1;
    }
    return ans;
}
int main(){
    int base=3,n=5;
    cout<<fast(base,n)<<endl;
    return 0;
}