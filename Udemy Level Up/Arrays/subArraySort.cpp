#include<bits/stdc++.h>
using namespace std;
 int findUnsortedSubarray(vector<int>& v) {
        int smallest=INT_MAX;
    int largest=0;
        if(v.size()<=1) return 0;
    for(int i=0;i<v.size();i++){
        if(i==0){

            if(v[i]<v[i+1]) continue;

        }
        else if(i==v.size()-1){
            if(v[i]>v[i-1]) continue;
        }
        else{
            if(v[i]<v[i+1] && v[i]>v[i-1]) continue;
        }
        smallest=min(smallest,v[i]);
        largest=max(largest,v[i]);
    }
    cout<<smallest<<endl;
    cout<<largest<<endl;
    // int lowerIndex=0;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]>smallest){
    //         lowerIndex=i;
    //         break;
    //     }
    // }
    // int higherIndex=0;
    // for(int i=v.size()-1;i>=0;i--){
    //     if(v[i]<largest){
    //         higherIndex=i;
    //         break;
    //     }
    // }
    // return higherIndex-lowerIndex;
    return 0;
    }
int main(){
    vector<int> v{1,2,3,4,5,8,6,7,9,10,11};
    cout<<findUnsortedSubarray(v)<<endl;
    return 0;
}
