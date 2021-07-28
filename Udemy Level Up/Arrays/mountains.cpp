#include<bits/stdc++.h>
using namespace std;
int longestMountain(vector<int> &arr){
    int longestPeak=0;
    for(int i=1;i<arr.size()-1;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            int currPeak=1;
            int temp=i;
            while(temp>0 && arr[temp]>arr[temp-1]){
                currPeak++;
                temp--;
            }
            while(i<arr.size()-1 && arr[i]>arr[i+1]){
                currPeak++;
                i++;
            }
            longestPeak=max(longestPeak,currPeak);
        }
    }
    return longestPeak;
}
int main(){
    vector<int> v{5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4};
    int res=longestMountain(v);
    cout<<res<<endl;
    return 0;
}