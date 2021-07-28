#include<bits/stdc++.h>
using namespace std;
void printDigits(int n,vector<string> &v){
    if(n<=0) return;
    int rem=n%10;
    printDigits(n/10,v);
    cout<<v[rem]<<" ";
}
int main(){
    int n;
    cin>>n;
    vector<string> v{"zero","one","two","three","four","five","six","seven","eight","nine"};
    printDigits(n,v);
    cout<<endl;
    return 0;
}