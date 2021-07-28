#include<bits/stdc++.h>
using namespace std;
void stockSpan(vector<int>&price,vector<int>&days){
    stack<pair<int,int>> s;
    int size=price.size();
    vector<int> res;
    for(int i=0;i<size;i++){
        if(!s.empty()){
            while(!s.empty() && s.top().first<price[i]){
                s.pop();
            }
            if(s.empty()) res.push_back(1);
            else res.push_back(i-s.top().second);
            s.push({price[i],days[i]});
        }
        else{
            res.push_back(1);
            s.push({price[i],days[i]});
        }
    }
    for(auto it:res) cout<<it<<" ";
    cout<<endl;
}
int main(){
    vector<int> price{100,80,60,70,60,75,110};
    vector<int> days{0,1,2,3,4,5,6};
    stockSpan(price,days);
    return 0;
}