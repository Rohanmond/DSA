#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int> umap;
void generateStrings(vector<int> &in,unordered_map<int,int>&umap,int i,string res){
    if(i==in.size()) {
        cout<<res<<endl;
        return;
    }
    if(i<in.size()-1){
        int curr=10*in[i]+in[i+1];
        if(curr<=26){
            generateStrings(in,umap,i+2,res+(char)umap[curr]);
        }
    }
    generateStrings(in,umap,i+1,res+(char)umap[in[i]]);
}


int main(){
    int base=65;
    for(int i=1;i<=26;i++){
        umap[i]=base;
        base++;
    }
    vector<int> in={1};
    generateStrings(in,umap,0,"");
    return 0;
}