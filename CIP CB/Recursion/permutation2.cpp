#include<bits/stdc++.h>
using namespace std;
void printP(string&s,int i,unordered_set<string>&uset){
    if(s[i]=='\0') {uset.insert(s);return ;}
    for(int j=i;s[j]!='\0';j++){
        swap(s[i],s[j]);
        printP(s,i+1,uset);
        swap(s[i],s[j]);
    }
}

int main(){
    string s;
    cin>>s;
    unordered_set<string> uset;
    printP(s,0,uset);
    for(auto str:uset) cout<<str<<endl;
    
    return 0;
}