#include<bits/stdc++.h>
using namespace std;

int indexEqualsValue(vector<int> &array) {
  // Write your code here.
  int ans=INT_MAX;
	int i=0;
	int j=array.size()-1;
	while(i<=j){
		int mid=(i+j)/2;
		if(array[mid]>=mid){
			ans=mid;
			j=mid-1;
		}else i=mid+1;
	}
	//if(array[ans]!=ans) return -1;
	return array[ans];
}
int main(){
    vector<int> v{-5,-3,0,3,4,5,9};
    int res=indexEqualsValue(v);
    cout<<res<<endl;
    return 0;
}