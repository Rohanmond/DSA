#include<bits/stdc++.h>
using namespace std;
int clearARange(int n,int i,int j){
    int p1=(-1)<<(j+1);
    int p2=(-1)<<i;
    int mask=p1 | (~p2);
    return n&mask;
}
int main(){
    int n=1024;
    int m=21;
    int i=2;
    int j=6;
    n=clearARange(n,i,j);
    m=m<<i;
    n=n|m;
    cout<<n<<endl;
    return 0;
}