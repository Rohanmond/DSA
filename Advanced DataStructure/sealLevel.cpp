#include<bits/stdc++.h>
using namespace std;
int totalValleyCount(vector<char> &s){
    int n=s.size();
    bool isInValley=false;
    int currLevel=0;
    int output=0;
    for(int i=0;i<n;i++){
        if(s[i]=='U') currLevel++;
        else if(s[i]=='D') currLevel--;
        if(currLevel<0 && isInValley) continue;
        if(currLevel<0) isInValley=true;
        else isInValley=false;
        if(isInValley) output++; 
        // cout<<output<<endl;
    }
    return output;
}
int main(){
    vector<char> c{'U','D','D','D','U','D','U','U','\0'};
    cout<<totalValleyCount(c)<<endl;
    return 0;
}