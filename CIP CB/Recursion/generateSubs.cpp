#include<bits/stdc++.h>
using namespace std;
void countSubs(string res,string &in,int i){
    if(i==in.length()) {
        cout<<res<<endl;
        return;
    }
    countSubs(res+in[i],in,i+1);
    countSubs(res,in,i+1);
}
int main(){
    string in;
    cin>>in;
    countSubs("",in,0);
    return 0;
}