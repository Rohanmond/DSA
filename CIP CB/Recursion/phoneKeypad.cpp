#include<bits/stdc++.h>
using namespace std;
vector<string> t={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void printKeypad(vector<int> &in,int i,string res){
    if(i==in.size()) {
        cout<<res<<endl;
        return;
    }
    string s=t[in[i]-2];
    // cout<<s<<endl;
    for(int j=0;j<s.length();j++){
        printKeypad(in,i+1,res+s[j]);
    }
}
int main(){
    vector<int> in{2,3,4};
    printKeypad(in,0,"");
    return 0;
}