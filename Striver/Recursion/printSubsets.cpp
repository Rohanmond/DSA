#include<bits/stdc++.h>
using namespace std;
int printSubs(vector<int>&input,int i,int k,int total){
    if(i==input.size()){
        if(total%k==0 && total!=0) return 1;
        return 0;
    }
    
     int left=printSubs(input,i+1,k,total+input[i]);
    

    int right=printSubs(input,i+1,k,total);
    return left+right;
}
int main(){
    vector<int> v{4,3,2};
    int k=3;
    // vector<int> res;
    cout<<printSubs(v,0,k,0)<<endl;
    return 0;
}