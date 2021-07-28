#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=31;
    int i=1;
    int j=3;
    int p1=(-1)<<(j+1);
    int p2=(-1)<<i;
    int mask=p1 | (~p2);
    cout<<(n&mask)<<endl;
    return 0;
}