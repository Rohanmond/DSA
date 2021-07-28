#include<bits/stdc++.h>
using namespace std;
void reverse(stack<int>&s){
   stack<int> extra;
   int size=s.size();
   int i=0;
   while(i<size){
       
       int x=s.top();
       cout<<x<<" :"<<endl;
       s.pop();
        int count=s.size();
       while(!s.empty() && count>i){
           count--;
           extra.push(s.top());
           cout<<s.top()<<"::"<<endl;
           s.pop();
       }
       s.push(x);
       while(!extra.empty()){
           s.push(extra.top());
           extra.pop();
       }
       i++;
   }
}
int main(){
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    cout<<s.size()<<endl;
    reverse(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}