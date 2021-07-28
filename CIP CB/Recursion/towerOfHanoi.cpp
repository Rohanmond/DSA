#include<bits/stdc++.h>
using namespace std;
void toh(int n,char src,char dest,char aux){
    if(n==1){
     cout<<" move "<<1<<" disc "<<src<<" to "<<dest<<endl;
        return;
    } 
    toh(n-1,src,aux,dest);
    cout<<" move "<<n<<" disc "<<src<<" to "<<dest<<endl;
    toh(n-1,aux,dest,src);
}
int main(){
    toh(4,'a','c','b');
}