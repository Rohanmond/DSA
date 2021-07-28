#include<bits/stdc++.h>
using namespace std;
string compressString(const string &str){   
    string curr;
    int i=0;
    char currChar='\0';
    for(char ch:str){
        if(currChar=='\0'){
            currChar=ch;
            curr+=ch;
            i++;
            continue;
        }
        if(currChar==ch) i++;
        else {
            curr+=to_string(i);
            curr+=ch;
            currChar=ch;
            i=1;
        }
    }
    curr+=to_string(i);
    if(curr.length()>=str.length()) return str;
    return curr;   
}
int main(){
    string s;
    cin>>s;
    string res=compressString(s);
    cout<<res<<endl;
    return 0;
}