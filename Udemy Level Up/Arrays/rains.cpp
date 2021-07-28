#include<bits/stdc++.h>
using namespace std;
int trappingWater(int arr[], int n){
        int currLeft[n];
        int currRight[n];
        currLeft[0]=arr[0];
        currRight[n-1]=arr[n-1];
        for(int i=1;i<n;i++){
            currLeft[i]=max(currLeft[i-1],arr[i]);
        }
        for(int i=n-2;i>=0;i--){
            currRight[i]=max(currRight[i+1],arr[i]);
        }
        // Code here
        int totalWater=0;
        
        for(int i=1;i<n-1;i++){
            
            totalWater+=min(currLeft[i],currRight[i])-arr[i];
        }
        return totalWater;
    }