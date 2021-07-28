#include<bits/stdc++.h>
using namespace std;
void generateBrackets(int n,string res,int cOfOp,int cOfC,int i){
    if(i==2*n) {
        cout<<res<<endl;
        return;
    }
    if(cOfOp<n) {
        generateBrackets(n,res+'(',cOfOp+1,cOfC,i+1);
        
    }
    if(cOfC<cOfOp){
        generateBrackets(n,res+')',cOfOp,cOfC+1,i+1);
    }
}
int main(){
    generateBrackets(3,"",0,0,0);
    return 0;
}