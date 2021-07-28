#include<bits/stdc++.h>
using namespace std;
template<class ForwardIterator,class T>
ForwardIterator search(ForwardIterator start,ForwardIterator end,T key){
    while(start!=end){
        if(*start==key) return start;
        start++;
    }
    return end;
}
int main(){
    list<int> l;
    l.push_back(12);
    l.push_back(4);
    l.push_back(5);
    auto res=search(l.begin(),l.end(),10);
    if(res==l.end()) cout<<"Element is not present"<<endl;
    else cout<<*res<<endl;
    return 0;
}