#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>&wight,vector<int>&price,int capacity,int n,int res){
    if(n<0 ) return res;
    int left=0;
    if((capacity-wight[n])>=0){
        left=maxProfit(wight,price,capacity-wight[n],n-1,res+price[n]);
    }
    int right=maxProfit(wight,price,capacity,n-1,res);
    return max(left,right);
}

int main(){
    vector<int> weight{5,4,6,3};
    vector<int> price{10,40,30,50};
    int capacity=10;
    int n=weight.size()-1;
    cout<<maxProfit(weight,price,capacity,n,0)<<endl;
    return 0;
}