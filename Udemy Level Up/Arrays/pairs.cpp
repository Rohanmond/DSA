#include<bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums,int target){
    vector<int> v;
    unordered_map<int,int> umap;
    for(int it=0;it<nums.size();it++){
        int currNum=nums[it];
        if(umap.find(target-currNum)!=umap.end()){
            v.push_back(umap[target-currNum]);
            v.push_back(it);
            return v;
        }
        umap[nums[it]]=it;
    }
    return {};
}
int main(){
    vector<int> v{2,7,11,15};
    int target=9;
    vector<int> res=twoSum(v,target);
    for(auto it:res){
        cout<<it<<" ";
    }
    cout<<endl;

    return 0;
}