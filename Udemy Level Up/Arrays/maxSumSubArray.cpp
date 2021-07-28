#include<bits/stdc++.h>
using namespace std;
pair<int,int> minDifference(vector<int> a,vector<int> b){
    //Complete this method
    int lowest=INT_MAX;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int currI=0;
    int currJ=0;
    int i=0;
    int j=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            j++;
            continue;
        }
        if(b[j]-a[i]<lowest){
            currI=i;
            currJ=j;
            lowest=b[j]-a[i];
        }
        i++;
    }

    pair<int,int> p;
    p.first=a[currI];
    p.second=b[currJ];
    return p;
}
int main(){
    vector<int> a{5,10,17,23,30};
    vector<int> b{14,19,26,134,135};
    pair<int,int> p=minDifference(a,b);
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}