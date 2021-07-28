#include<bits/stdc++.h>
using namespace std;
int clear(int i,int N){
    int j=0;
    while(j<=i){
        int mask=~(1<<j);
        N=N&mask;
        j++;
    }
    return N;
}
int main(){
    int N=22;
    cout<<clear(2,N)<<endl;

    cout<<clear(2,30)<<endl;

    //another approach in o(1)
    int n=22;
    int i=2;
    cout<<(n&((~0)<<(i+1)))<<endl;
    return 0;
}