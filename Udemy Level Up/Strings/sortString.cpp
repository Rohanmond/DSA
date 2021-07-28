#include<bits/stdc++.h>
using namespace std;
vector<pair<string,string>> tokenizePairs(vector<string> &inputs,int col){
    vector<pair<string,string>> res;
    for(auto str:inputs){
        pair<string,string> p;
        int i=0;
        stringstream ss(str);
        string token;
        while(i!=col){
            i++;
            getline(ss,token,' ');
        }
        p.first=str;
        p.second=token;
        res.push_back(p);
    }
    return res;
}
bool compareLexo(pair<string,string> a,pair<string,string> b){
    return a.second<b.second;
}
bool compareNum(pair<string,string> a,pair<string,string> b){
    int firstKey=stoi(a.second);
    int secKey=stoi(b.second);
    return firstKey<secKey;
}
int main(){
    int n;
    cin>>n;
    cin.ignore();
    vector<string> v;
    while(n--){
        string s;
        getline(cin,s);
        v.push_back(s);
    }
    int col;
    string rev,numOrL;
    cin>>col;
    cin.ignore();
    cin>>rev;
    cin.ignore();
    cin>>numOrL;
    vector<pair<string,string>> res=tokenizePairs(v,col);
    if(numOrL=="numeric"){
        sort(res.begin(),res.end(),compareNum);
    }else{
        sort(res.begin(),res.end(),compareLexo);
    }
    if(rev=="true"){
        for(auto it:res){
            string s=it.first;
            reverse(s.begin(),s.end());
            cout<<s<<endl;
        }
        cout<<rev<<endl;
    }
    else{
        for(auto it:res){
           cout<<it.first<<endl;
        }
    }
    
    return 0;
}