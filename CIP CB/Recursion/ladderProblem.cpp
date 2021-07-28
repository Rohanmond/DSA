#include<bits/stdc++.h>
using namespace std;
int count(int n){
    if(n==0) return 1;
    if(n<0) return 0;
    int a=count(n-1);
    int b=count(n-2);
    int c=count(n-3);
    return a+b+c;
}
int main(){
    int n=4;
    cout<<count(n)<<endl;
    return 0;
}