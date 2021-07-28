#include<bits/stdc++.h>
using namespace std;
int stringToInt(char* a,int n){
    if(n<0) return 0;
    return (a[n]-48)+10*stringToInt(a,n-1);
}
int main(){
    char a[100];
    cin>>a;
    int len=strlen(a);
    int res=stringToInt(a,len-1);
    cout<<res<<endl;
    return 0;
}