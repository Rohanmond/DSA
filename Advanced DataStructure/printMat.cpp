#include<bits/stdc++.h>
using namespace std;
void printMat(vector<vector<int>> &mat){
    int rowTop=0;
    int rowBottom=mat.size()-1;
    int colLeft=0;
    int colRight=mat[0].size()-1;
    while(rowTop<=rowBottom && colLeft<=colRight){
        for(int i=colLeft;i<=colRight;i++){
            cout<<mat[rowTop][i]<<" ";
        }
        rowTop++;
        for(int i=rowTop;i<=rowBottom;i++){
            cout<<mat[i][colRight]<<" ";
        }
        colRight--;
        if(rowTop>rowBottom){
            for(int i=colRight;i>=colLeft;i--){
                cout<<mat[rowBottom][i]<<" ";
            }
        }
        rowBottom--;
        if(colLeft<colRight){
            for(int i=rowBottom;i>=rowTop;i--){
                cout<<mat[i][colLeft]<<" ";
            }
        }
        colLeft++;
    }
    cout<<endl;
}
int main(){
    vector<vector<int>> v{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    printMat(v);
    return 0;
}