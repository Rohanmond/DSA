#include<bits/stdc++.h>
using namespace std;
int maxSum(vector<int> &v){
    int n=v.size();
    int maxRes=0;
    vector<int> pref(n,0);
    pref[0]=v[0];
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int currSum=pref[j];
            if(i>0) currSum-=pref[i-1];
            maxRes=max(maxRes,currSum);
        }
    }
    return maxRes;
}
int main(){
    vector<int> v{-4,1,3,-2,6,2,-1,-4,-7};
    int total=maxSum(v);
    cout<<total<<endl;
    return 0;
}