#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="aabccbcd";
    queue<char> q;
    unordered_map<char,int> umap;
    for(int i=0;i<s.length();i++){
        umap[s[i]]++;
        if(!q.empty()){
            while(!q.empty() && umap[q.front()]>1){
                q.pop();
            }
            if(q.empty()) {
                if(umap[s[i]]>1) cout<<-1<<" ";
                else{
                    q.push(s[i]);
                    cout<<q.front()<<" ";
                }
                
            }else{
                q.push(s[i]);
                cout<<q.front()<<" ";
            }
            continue;
        }
        else{
            if(umap[s[i]]>1) cout<<-1<<" ";
            else {
                q.push(s[i]);
                cout<<q.front()<<" ";
            }
        }
    }
    return 0;
}