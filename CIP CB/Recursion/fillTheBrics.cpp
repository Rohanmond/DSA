#include<bits/stdc++.h>
using namespace std;
int totalBricks(int n){
    if(n<=3) return 1;
    int a=totalBricks(n-4);
    int b=totalBricks(n-1);
    return a+b;
}
int main(){
    int n=4;
    cout<<totalBricks(n)<<endl;
    return 0;
}