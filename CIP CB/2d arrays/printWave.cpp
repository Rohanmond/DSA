#include<bits/stdc++.h>
using namespace std;
void printWave(vector<vector<int>> &arr){
    int row=arr.size();
    int col=arr[0].size();

    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
                cout<<arr[j][i]<<" ";
            }
            
        }
        else{
            for(int j=0;j<row;j++){
                cout<<arr[row-j-1][i]<<" ";
            }
            
        } 
    }
}
int main(){
    vector<vector<int>> arr={{1,4,7,10},{2,5,8,11},{3,6,9,12}};
    printWave(arr);
    return 0;
}