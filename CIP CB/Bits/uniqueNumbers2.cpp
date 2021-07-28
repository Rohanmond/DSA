#include<bits/stdc++.h>
using namespace std;
void print(vector<int> &v){
    int n=v.size();
    int currRes=0;
    for(int i=0;i<n;i++){
        currRes^=v[i];
    }
    int i=0;
    while(currRes){
        if(currRes&(1<<i)) break;
        i++;
    }
    cout<<i<<endl;
    int setBits=0;
    int unsetBits=0;
    cout<<(1<<i)<<endl;
    for(int j=0;j<n;j++){
        if(v[j]&(1<<i)) {setBits^=v[j];cout<<v[j]<<"set"<<endl;}
        else {unsetBits^=v[j];cout<<"unset:"<<v[j]<<endl;}
    }
    cout<<unsetBits<<" "<<setBits<<endl;
}
int main(){
    vector<int> v{1,1,2,3,5,2,5,7};
    print(v);
    return 0;
}