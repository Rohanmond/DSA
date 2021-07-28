#include<bits/stdc++.h>
using namespace std;
//aproach1

vector<pair<int,int>> prefixSum(vector<int> &v,int k){
    vector<pair<int,int>> res;
    int n=v.size();
    for(int i=1;i<n;i++){
        v[i]=v[i-1]+v[i];
        // cout<<v[i]<<endl;
    }

    for(int i=0;i<n-1;i++){
        int j=i+1;
        int end=n-1;
        while(j<=end){
            // cout<<"1"<<endl;
            
            int mid=(j+end)/2;
            int rem;
            if(i!=0) rem=v[mid]-v[i];
            else rem=v[mid]; 
            if(rem==k) {
                pair<int,int> temp;
                temp.first=i+1;
                temp.second=mid;
                res.push_back(temp);
                break;
            }
            if(rem<k) {
                j++;
                // cout<<j<<endl;
            } 
            else end--;
        }
    }
    return res;
}
vector<pair<int,int>> slidingWindow(vector<int> &v,int k){
    vector<pair<int,int>> res;
    int currSum=0;
    int n=v.size();
    int i=0;
    int j=0;
    while(j<n){
       currSum+=v[j];
       j++;
       while(currSum>k && i<j){
           currSum-=v[i];
           i++;
       }
       if(currSum==k){
           pair<int,int> temp;
           temp.second=j-1;
           temp.first=i;
           res.push_back(temp);
       }
    }
    return res;
}
int main(){
    vector<int> v{1,3,2,1,4,1,3,2,1,1,2};
    int k=8;
    vector<pair<int,int>> res=slidingWindow(v,8);
    for(auto it:res){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}