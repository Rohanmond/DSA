#include<bits/stdc++.h>
using namespace std;
void powerSet(string s){
    int len=s.length();
    for(int i=0;i<(1<<len);i++){
        int j=0;
        int temp=i;
        while(temp){
            if(temp&1) cout<<s[j];
            temp=temp>>1;
            j++;
        }
        cout<<endl;
    }
}
int main(){
    string s="abc";
    powerSet(s);
    return 0;
}