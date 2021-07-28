#include<iostream>
#include "Vector.h"
using namespace std;
int main(){
    Vector<int> v;
    v.pushback(4);
    cout<<"capacity:"<<v.capacity()<<endl;
    v.pushback(50);
    cout<<"capacity:"<<v.capacity()<<endl;

    v.pushback(6);
    cout<<"capacity:"<<v.capacity()<<endl;

    // v.popBack();
    v.pushback(4);
    cout<<"capacity:"<<v.capacity()<<endl;

       v.pushback(4);
    cout<<"capacity:"<<v.capacity()<<endl;
       v.pushback(4);
    cout<<"capacity:"<<v.capacity()<<endl;
       v.pushback(4);
    cout<<"capacity:"<<v.capacity()<<endl;
       v.pushback(4);
    cout<<"capacity:"<<v.capacity()<<endl;
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}