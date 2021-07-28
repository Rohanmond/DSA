#include<bits/stdc++.h>
using namespace std;
string concatenate(vector<int> numbers){
    vector<int> temp;
    sort(numbers.begin(),numbers.end());
    while(next_permutation(numbers.begin(),numbers.end())){
       temp=numbers;
    }
    
    string s;
    for(auto it:temp){
        s+=to_string(it);
    }
    return s;
}
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    string res=concatenate(v);
    cout<<res<<endl;
    return 0;
}