#include<bits/stdc++.h>
using namespace std;
bool compare(int a,int b){
    return a<b;
}

void bubbleSort(vector<int> &v,bool (&cmp)(int a,int b)){
    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(cmp(v[j],v[j+1])){
                swap(v[j],v[j+1]);
            }
        }
    }
}
int main(){
    vector<int> v{5,2,67,4,9};
    bubbleSort(v,compare);
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}