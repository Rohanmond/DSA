#include<bits/stdc++.h>
using namespace std;
string normalize(const string &sentence) {
    string copy ="";
    stringstream ss(sentence);
    string token;
    while(getline(ss,token,' ')){
        char first=token[0];
        if(first>96 && first<=122) first-=32;
        string rest=token.substr(1,token.length()-1);
        transform(rest.begin(),rest.end(),rest.begin(),::tolower);
        copy+=first;
       copy+=rest;
        copy+=" ";
    }
    copy[copy.length()-1]='\0';
    return copy;
}
int main(){
    string s;
    getline(cin,s);
    string res=normalize(s);
    cout<<res<<endl;
    return 0;
}