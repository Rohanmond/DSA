#include<bits/stdc++.h>
using namespace std;
int find(vector<int> array,int target){
    int breakPoint;
    int i=0;
    int j=array.size()-1;
    while(i<=j){
        int mid=(i+j)/2;
        if(array[mid]>array[i]) {
            if(array[mid]<array[mid+1]) i=mid;
            else i=mid+1; 
        }
        else {
            breakPoint=mid;
           
            j=mid-1;
        } 
    }
    return breakPoint;
}
int main(){
    // vector<int> v{45,61,71,72,73,0,1,21,33,37};
    vector<int> v{75,78,2,35,35,67};
    int res=find(v,33);
    cout<<res<<endl;
    return 0;
}