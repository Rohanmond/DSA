#include<bits/stdc++.h>
using namespace std;
float sqaureRoot(int n){
    float res=0;
    int i=0;
    int j=n;
    while(i<=j){
        int mid=(i+j)/2;
        if(mid*mid<=n){
            res=mid;
            i=mid+1;
        }else j=mid-1;
    }
    int prec=4;
    float inc=0.1;
    for(int i=1;i<=prec;i++){
        while(res*res<=n){
            res+=inc;
        }
        res-=inc;
        inc=inc/10;
    }
    return res;
}
int main(){
    cout<<sqaureRoot(25)<<endl;
    cout<<sqaureRoot(13)<<endl;
    cout<<sqaureRoot(105)<<endl;
    cout<<sqaureRoot(0)<<endl;
    cout<<sqaureRoot(1)<<endl;


    return 0;
}