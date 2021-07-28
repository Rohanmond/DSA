#include<bits/stdc++.h>
using namespace std;
vector<int> sieve(){
    int range=1e5+1;
    vector<int> temp(range,1);
    vector<int> res;
    for(int i=2;i<range;i++){
        if(temp[i]){
            res.push_back(i);
            for(int j=i;j<range;j+=i){
                temp[j]=0;
            }
        }
    }
    return res;
}
int main(){
    vector<int> primes=sieve();
    int n;
    cin>>n;
    while (n--)
    {
        int l,r;
        cin>>l>>r;
        vector<int> res(r-l+1,1);
        for(auto x:primes){
            if(x*x>r) break;
            int first=(l/x)*x;
            if(l%x) first+=x;
            for(int i=max(first,x*x);i<=r;i+=x){
                res[i-l]=0;
            }
        }
        int counter=0;
       for(int i=0;i<r-l+1;i++) {
           if(res[i]){
               cout<<i<<":"<<res[i]<<endl;
           }
       }
        cout<<endl;
        cout<<counter<<endl;
    }
    return 0;
}