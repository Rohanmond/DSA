#include<bits/stdc++.h>
using namespace std;
vector<string> tokenizer(char input[]){
    vector<string> tokens;
    char *ptr=strtok(input," ");
    // tokens.push_back(string(ptr));s
    while(ptr!=NULL){
        tokens.push_back(string(ptr));
        ptr=strtok(NULL," ");
        
    }
    return tokens;
}
int main(){
    char arr[1000];
    cin.getline(arr,1000);
    vector<string> res=tokenizer(arr);
    for(auto it:res){
        cout<<it<<endl;
    }
    return 0;
}