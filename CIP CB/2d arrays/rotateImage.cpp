#include<bits/stdc++.h>
using namespace std;
void rotalMatrix(vector<vector<int>> &matrix){
    int row=matrix.size();
    int col=matrix[0].size();
    //rotate columnwise;
    for(int c=0;c<col;c++){
        int rStart=0;
        int rEnd=row-1;
        while(rStart<rEnd){
            swap(matrix[rStart][c],matrix[rEnd][c]);
            rStart++;
            rEnd--;
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i<j){
                swap(matrix[i][j],matrix[j][i]);
            }
           // swap(matrix[i][j],matrix[j][i]);
        }
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    int k=1;
    vector<vector<int>> v;
    for(int i=0;i<m;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            temp.push_back(k);
            k++;
        }
        v.push_back(temp);
    }
    //print
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Print after operation"<<endl;
    rotalMatrix(v);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}