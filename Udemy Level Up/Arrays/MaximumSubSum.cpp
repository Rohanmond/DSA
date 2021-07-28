#include<bits/stdc++.h>
using namespace std;
int maxSubSum(vector<int> &v){
    int n=v.size();
     int maxRes=0;
    int currRes=v[0];
    for(int i=1;i<n;i++){
       currRes=max(v[i],currRes+v[i]);
       maxRes=max(currRes,maxRes);
    }
    
    return maxRes;
}
int main(){
   vector<int> v{-1,2,3,4,-2,6,-8,3};
   cout<<maxSubSum(v)<<endl;
   return 0;
}