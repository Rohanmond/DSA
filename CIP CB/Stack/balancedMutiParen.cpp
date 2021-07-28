#include<bits/stdc++.h>
using namespace std;
bool checkBal(string &str,int i,stack<char>&s){
    if(i==str.length()){
        if(s.empty()) return true;
        return false;
    }
    if(str[i]==')' || str[i]=='}' || str[i]==']'){
        if(s.empty()) return false;
        if(s.top()=='(' && str[i]==')') s.pop();
        else if(s.top()=='{' && str[i]=='}') s.pop();
        else if(s.top()=='[' && str[i]==']') s.pop();
        else return false;
    }
    if(str[i]=='(' || str[i]=='{' || str[i]=='[') s.push(str[i]);
    return checkBal(str,i+1,s);
}
int main(){
    string str="(";
    stack<char> s;
    cout<<checkBal(str,0,s)<<endl;
    return 0;
}