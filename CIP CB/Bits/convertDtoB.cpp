#include<bits/stdc++.h>
using namespace std;
int convertDtoB(int n){
    int p=1;
    int ans=0;
    while(n){
        ans+=(p*(n&1));
        n=n>>1;
        p*=10;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<convertDtoB(n)<<endl;
    return 0;
}