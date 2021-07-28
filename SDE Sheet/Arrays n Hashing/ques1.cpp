#include<bits/stdc++.h>
using namespace std;
void sortWithoutExtraSpace(vector<int> &nums,vector<int> &order){
    int n=nums.size();
    int first=order[0];
    int second=order[1];
    int third=order[2];
    int low,mid,high;
    low=mid=0;
    high=n-1;
    while(mid<n && mid<=high){
        if(nums[mid]==first){
            swap(nums[low++],nums[mid++]);
        }    
        else if(nums[mid]==second) mid++;
        else if(nums[mid]==third){
            swap(nums[mid],nums[high--]);
        }
    }
}
int main(){
    vector<int> v{1,0,0,-1,-1,0,1,1};
    vector<int> order{0,1,-1};
    sortWithoutExtraSpace(v,order);
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}