#include<bits/stdc++.h>
using namespace std;
int unique(vector<int> &v){
    int n=v.size();
    int res=0;
    for(int i=0;i<n;i++){
        res=res^v[i];
    }
    return res;
}
int main(){
    vector<int> v{3,2,3,5,6,5,2};
    cout<<unique(v)<<endl;
    return 0;
}