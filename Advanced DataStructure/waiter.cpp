#include<bits/stdc++.h>
using namespace std;
vector<int> primes(){
    int maxSize=1e6+1;
    vector<int> temp(maxSize,1);
    temp[0]=0;
    temp[1]=0;
    for(int i=2;i*i<=maxSize;i++){
        if(temp[i]){
            for(int j=i*i;j<=maxSize;j+=i){
                temp[j]=0;
            }
        }
    }
    vector<int> res;
    for(int i=0;i<=maxSize;i++){
        if(temp[i]) res.push_back(i);
    }
    return res;
}
vector<int> waiter(vector<int> &number,int q){
    stack<int> a;
    for(int i=0;i<number.size();i++){
        a.push(number[i]);
    }
    vector<int> primesNos=primes();
    vector<int> res;
    int i=0;
    while(q--){
        stack<int> tempa;
        stack<int> b;
        while(!a.empty()){
            int temp=a.top();
            if(temp%primesNos[i]==0){
                b.push(temp);
            }else tempa.push(temp);
            a.pop();
        }
        while(!b.empty()){
            res.push_back(b.top());
            b.pop();
        }
        a=tempa;
        i++;
    }
    while(!a.empty()) {
        res.push_back(a.top());
        a.pop();
    }
    return res;
}
int main(){
    vector<int> v{2,3,4,5,6,7};
    int q=3;
    vector<int> ans=waiter(v,q);
    for(auto it:ans) cout<<it<<endl;
    return 0;
}