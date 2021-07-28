#include<bits/stdc++.h>
using namespace std;
vector<string> stringTokenizer(string input){
    vector<string> tokens;
    string token;
    stringstream ss(input);
    while (getline(ss,token,' ')){
        tokens.push_back(token);
    }

    return tokens;
}
int main(){
    string input;
    getline(cin,input);
    vector<string> tokens=stringTokenizer(input);
    for(auto it:tokens){
        cout<<it<<endl;
    }
    cout<<endl;
    return 0;
}