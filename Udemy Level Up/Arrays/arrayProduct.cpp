#include<bits/stdc++.h>
using namespace std;
vector<int> productArray(vector<int> &v){
    int temp=1;
    int n=v.size();
    vector<int> prod(n);
    for(int i=0;i<n;i++){
        prod[i]=temp;
        temp*=v[i];
    }

    temp=1;
    for(int i=n-1;i>=0;i--){
        prod[i]*=temp;
        temp*=v[i];
    }
    return prod;
}
int main(){
    vector<int> v{1,2,3,4,5};
    vector<int> res=productArray(v);
    for(auto it:res){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}