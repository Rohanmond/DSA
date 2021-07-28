#include<bits/stdc++.h>
using namespace std;
int longestBand(vector<int> &v){
    unordered_set<int> uset;
    for(int i=0;i<v.size();i++){
        uset.insert(v[i]);
    }
    int maxRes=0;
    for(int i=0;i<v.size();i++){
        
        if(uset.find(v[i]-1)==uset.end()){
            int temp=v[i];
            int count=1;
            while(uset.find(temp+1)!=uset.end()){
                temp++;
                count++;
            }
            maxRes=max(maxRes,count);
        }
        
    }
    return maxRes;
}
int main(){
    vector<int> v{1,9,3,0,18,5,2,4,10,7,12,6};
    int res=longestBand(v);
    cout<<res<<endl;
    return 0;
}