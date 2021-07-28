#include<bits/stdc++.h>
using namespace std;
int unique(vector<int> &v){
    int arr[31]={0};
    int maxi=INT_MIN;
    for(int i=0;i<v.size();i++){
        maxi=max(maxi,v[i]);
    }
    int i=0;
    while(maxi>=(1<<i)){
        int currSum=0;
        for(int j=0;j<v.size();j++){
            if(v[j]&(1<<i)) currSum++;
        }
        cout<<currSum<<endl;
        arr[i]=currSum%3;
        i++;
    }
    int p=1;
    int ans=0;
    for(int k=0;k<i;k++) cout<<arr[k]<<" ";
    cout<<endl;
    for(int k=0;k<i;k++){
        ans+=arr[k]*p;
        p*=2;
    }
    return ans;
}
int main(){
    vector<int> v{3,3,3,6,7,7,7,9,9,9};
    cout<<unique(v)<<endl;
    return 0;
}