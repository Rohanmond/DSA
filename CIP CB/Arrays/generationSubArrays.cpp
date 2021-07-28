#include<bits/stdc++.h>
using namespace std;
void generateSubArrays(vector<int> &v){
    int n=v.size();
    int maxSum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int currSum=0;
            for(int k=i;k<=j;k++){
                currSum+=v[k];
                cout<<v[k]<<" ";
            }
            maxSum=max(maxSum,currSum);
            cout<<endl;
        }
    }
    cout<<maxSum<<endl;
}
int main(){
    vector<int> v{-4,1,3,-2,6,2,-1,-4,-7};
    generateSubArrays(v);
    return 0;
}