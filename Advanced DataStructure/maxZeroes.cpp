#include<bits/stdc++.h>
using namespace std;
int OppLowerBound(vector<int> &v,int item){
    int i=0;
    int index=-1;
    int j=v.size()-1;
    while(i<=j){
        int mid=(i+j)>>1;
        if(v[mid]==item){
            index=mid;
            j=mid-1;
        }else i=mid+1;
    }
    return index;
}
int maxZeroes(vector<vector<int>> &v){
    int row=v.size();
    int col=v[0].size();
    int maxRow=-1;
    int maxCount=0;
    for(int i=0;i<row;i++){
       int lb=OppLowerBound(v[i],0);
       if(lb!=-1){
           if((col-1-lb)>maxCount){
               maxRow=i;
               maxCount=col-1-lb;
           }
       }
    }
    return maxRow;

}
int main(){
    vector<vector<int>> v{{1,1,1,1},{1,1,0,0},{1,0,0,0},{1,1,0,0}};
    int res=maxZeroes(v);
    cout<<res<<endl;
    return 0;
}