#include<bits/stdc++.h>
using namespace std;
vector<int> sortStack(vector<int> &stack) {
  // Write your code here.
  if(stack.size()==1){
      return stack;
  }
  int x=stack[stack.size()-1];
  stack.pop_back();
  vector<int> res=sortStack(stack);
  vector<int> temp;
  while(res.size()!=0 && res[res.size()-1]>x){
      temp.push_back(res[res.size()-1]);
      res.pop_back();
  }
  res.push_back(x);
  while(temp.size()!=0){
      res.push_back(temp[temp.size()-1]);
      temp.pop_back();
  }
  return res;
}
int main(){
    vector<int> v{-5,2,-2,4,3,1};
    vector<int> res=sortStack(v);
    for(auto it:res){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}
