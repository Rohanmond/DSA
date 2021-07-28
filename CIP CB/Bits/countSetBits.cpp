#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=13;
    int i=0;
    int count=0;
    while((1<<i)<=n){
        if(n&(1<<i)) count++;
        i++;
    }
    cout<<count<<endl;
    return 0;
}