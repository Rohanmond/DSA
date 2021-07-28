#include<bits/stdc++.h>
using namespace std;
void countingSort(vector<int> &v){
    vector<int> temp(1e6+1,0);
    int n=v.size();
    for(int i=0;i<n;i++){
        temp[v[i]]++;
    }
    int maxR=(int) (1e6+1);
   
    int curr=0;
    for(int i=0;i<maxR;i++){
        
        for(int j=0;j<temp[i];j++){
            v[curr]=i;
            curr++;
        }
    }
  
    for(auto it:v){
        cout<<it<<" ";
    }
      cout<<endl;
}
int main(){
    vector<int> v{2,0,2,1,1,2};
    countingSort(v);
    return 0;
}