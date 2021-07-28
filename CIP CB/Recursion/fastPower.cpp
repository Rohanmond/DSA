#include<bits/stdc++.h>
using namespace std;
int fastPower(int a,int n){
    if(n==0) return 1;
    int smaller_ans=fastPower(a,n/2);
    smaller_ans*=smaller_ans;
    if(n&1) return smaller_ans*a;
    return smaller_ans;
}
int main(){
    int a,n;
    cin>>a>>n;
    cout<<fastPower(a,n)<<endl;
    return 0;
}