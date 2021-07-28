#include<bits/stdc++.h>
using namespace std;
vector<int> stringSearch(string big,string small){
    vector<int> res;
    int index=big.find(small);
    if(index==-1) return {};
    while(index!=-1){
        res.push_back(index);
        index=big.find(small,index+1);
        
    }
    return res;
}
int main(){
    string paragraph="I liked the movie, acting in movie was great!";
    string word="movie";
    vector<int> res=stringSearch(paragraph,word);
    for(auto it:res){
        cout<<it<<",";
    }
    cout<<endl;
    return 0;
}