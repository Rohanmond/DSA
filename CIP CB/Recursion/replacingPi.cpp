#include<bits/stdc++.h>
using namespace std;
void replacePi(char* a,int n,int len){
    if(n==0) return;
    if(a[n]=='i' && a[n-1]=='p'){
        for(int j=len;j>n;j--){
            a[j+2]=a[j];
        }
        a[n-1]='3';
        a[n]='.';
        a[n+1]='1';
        a[n+2]='4';
        len=len+2;
    }
    replacePi(a,n-1,len);
}
int main(){
    char a[100];
    cin>>a;
    int i=strlen(a);
    cout<<i<<endl;
    replacePi(a,i-1,i);
    cout<<a<<endl;
    return 0;
}