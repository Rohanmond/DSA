#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &nums){
    vector<vector<int>> v;
    sort(nums.begin(),nums.end());
    int i=0;
    while(i<nums.size()){
        int target=-nums[i];
        int l=i+1;
        int r=nums.size()-1;
        while(l<r){
            int currentSum=nums[l]+nums[r];
            if(currentSum<target) l++;
            else if(currentSum>target) r--;
            else{
                vector<int> temp{nums[i],nums[l],nums[r]};
                v.push_back(temp);
                while(l<r && temp[1]==nums[l]) l++;
                while(l<r && temp[2]==nums[r]) r--;
            }
        }
        int x=nums[i];
        while(i<nums.size() && x==nums[i]) i++;
    }
    return v;
}
int main(){
    vector<int> nums{-1,0,2,1,-1,-4};
    vector<vector<int>> res=threeSum(nums);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}