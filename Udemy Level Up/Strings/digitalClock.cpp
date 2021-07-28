#include<bits/stdc++.h>
using namespace std;
string clock(int minutes){
    int hour=minutes/60;
    minutes=minutes-60*hour;
    string s;
    s+=to_string(hour);
    s+=":";
    if(minutes<9){
        s+="0";
    }
    s.append(to_string(minutes));
    return s;
}
int main(){
    int n;
    cin>>n;
    string res=clock(n);
    cout<<res<<endl;
    return 0;

}