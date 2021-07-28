#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    string temp="";
    int i=0;
    int j=0;
    int maxWindowSize=0;
    unordered_map<char,int> ump;
    while(j<n){
        int tempWindow=0;
       while(j<n && ump.find(s[j])==ump.end()){
           tempWindow++;
           ump[s[j]]=j;
           j++;
       }
       maxWindowSize=max(tempWindow,maxWindowSize);
        i=ump[s[j]]+1;
    }
}