#include<bits/stdc++.h>
using namespace std;
bool isBalanced(string &str,int i,stack<char>&s){
    if(i==str.length()){
        if(s.empty()) return true;
        return false;
    }
    if(str[i]==')'){
        if(s.empty()) return false;
        s.pop();
    }
    if(str[i]=='(') s.push(str[i]);
    return isBalanced(str,i+1,s);
}
int main(){
    string str=")(";
    stack<char> s;
    cout<<isBalanced(str,0,s)<<endl;
    return 0;
}