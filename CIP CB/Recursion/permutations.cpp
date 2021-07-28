#include<bits/stdc++.h>
using namespace std;
void printPermutation(string &s,string res){
    if(res.length()==s.length()) {cout<<res<<endl;return;}
    for(int i=0;i<s.length();i++){
        char curr=s[i];
        if(res.find(curr)!=-1) continue;
        printPermutation(s,res+curr);
    }
}
int main(){
    string s;
    cin>>s;
    printPermutation(s,"");
    return 0;
}