#include<bits/stdc++.h>
using namespace std;
void spiral(vector<vector<int>> &v){
    int rowSize=v.size();
    int colSize=v[0].size();
    int startRow=0;
    int endRow=rowSize-1;
    int startCol=0;
    int endCol=colSize-1;
    while(startCol<=endCol and startRow<=endRow){
        for(int i=startCol;i<=endCol;i++){
            cout<<v[startRow][i]<<" ";
        }
        startRow++;
        for(int i=startRow;i<=endRow;i++){
            cout<<v[i][endCol]<<" ";
        }
        endCol--;
        if(endRow>startRow){
            for(int i=endCol;i>=startCol;i--){
                cout<<v[endRow][i]<<" ";
            }
        }
        endRow--;
        if(startCol<endCol){
            for(int i=endRow;i>=startRow;i--){
                cout<<v[i][startCol]<<" ";
            }
        }
        startCol++;
    }
}



int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>> v;
    int k=1;
    for(int i=0;i<m;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            temp.push_back(k++);
        }
        v.push_back(temp);
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]<10){
                cout<<v[i][j]<<"  ";
                continue;
            }
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    spiral(v);
    return 0;
}