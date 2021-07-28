#include<bits/stdc++.h>
using namespace std;
bool compare(string a,string b){
    if(a.length()==b.length()) return a<b;
    return a.length()>b.length();
}
int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<string> s;
    for(int i=0;i<n;i++){
        string str;
        getline(cin,str);
        s.push_back(str);
    }
    sort(s.begin(),s.end(),compare);
    for(auto it:s){
        cout<<it<<endl;
    }

    return 0;
}