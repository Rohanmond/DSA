#include<bits/stdc++.h>
using namespace std;
int pow(int a,int n){
    if(n==0) return 1;
    if(n%2) return a*pow(a,n-1);
    else return pow(a,n/2)*pow(a,n/2);
}
int main(){
    int a,n;
    cin>>a>>n;
    cout<<pow(a,n)<<endl;
    return 0;
}