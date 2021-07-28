#include<bits/stdc++.h>
using namespace std;
void printPythagorean(int limits){
    int a,b,c=0;
    int m=2;
    while(c<limits){
        for(int n=1;n<m;n++){
            a=m*m-n*n;
            b=2*m*n;
            c=m*m+n*n;
            if(c>limits) break;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        m++;
    }
}
int main(){
    printPythagorean(20);
    return 0;
}