#include<bits/stdc++.h>
using namespace std;
int longestPeak(vector<int> array) {
  // Write your code here.
	int largest=0;
  unordered_set<int> peaks;
	for(int i=1;i<(array.size()-1);i++){
		if(array[i]>array[i-1] && array[i]>array[i+1]) peaks.insert(array[i]);
	}
	int i=0;
    while(i<(array.size()-1)){
		if(peaks.find(array[i])!=peaks.end()){
			int currCount=0;
			int temp=i;
			while(temp>0){
				if(!(array[temp]>array[temp-1])) break;
                cout<<array[temp]<<" ";
				currCount++;
				temp--;
			}
			while(i<(array.size()-1)){
				if(!(array[i]>array[i+1])) break;
                cout<<array[i]<<" ";
				currCount++;
				i++;
			}
			currCount++;
			largest=max(largest,currCount);
		}
        cout<<endl;
        i++;
	}
	return largest;
}
int main(){
    vector<int> v{1,2,3,3,4,0,10,6,5,-1,-3,2,3};
    cout<<longestPeak(v)<<endl;
    return 0;
}
