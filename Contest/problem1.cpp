#include<bits/stdc++.h>
using namespace std;
 int countTriples(int n) {
        int a,b,c=0;
        int count=0;
        int m=2;
        while(c<=n){
            for(int i=1;i<m;i++){
                cout<<m<<" "<<i<<endl;
                a=m*m-i*i;
                b=2*m*i;
                c=m*m+i*i;
                // if(c>n) break;
                count++;
                cout<<a<<" "<<b<<" "<<c<<endl;
                cout<<count<<endl;
            }
            m++;
        }
        return count;
}
int main(){
    cout<<countTriples(18)<<endl;
    return 0;
}