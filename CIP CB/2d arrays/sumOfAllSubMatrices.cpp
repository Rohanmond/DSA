#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> v{{1,1},{1,1}};
    //Brute Force Solution:o(n6),o(1)
    // int sum=0;
    // int m=v.size();
    // int n=v[0].size();
    // for(int i1=0;i1<m;i1++){
    //     for(int j1=0;j1<n;j1++){
    //         for(int i2=i1;i2<m;i2++){
    //             for(int j2=j1;j2<n;j2++){
    //                 for(int i=i1;i<=i2;i++){
    //                     for(int j=j1;j<=j2;j++){
    //                         sum+=v[i][j];
    //                         cout<<sum<<endl;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    // }
    // cout<<sum<<endl;

    //Sol 2:make a prefix 2d Sum:o(n4),o(1)/o(n2)
    //declare a 2d prefix array
    vector<vector<int>> pref2D(v);
    int m=v.size();
    int n=v[0].size();
    //rowwise sum
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j==0) continue;
            pref2D[i][j]=pref2D[i][j-1]+pref2D[i][j];
        }
    }
    //col wise sum
    for(int c=0;c<n;c++){
        for(int r=0;r<m;r++){
            if(r==0) continue;
            pref2D[r][c]=pref2D[r-1][c]+pref2D[r][c];
        }
    }
   
    //now compute the sum
    int sum=0;
    for(int ti=0;ti<m;ti++){
        for(int tj=0;tj<n;tj++){
            for(int bi=ti;bi<m;bi++){
                for(int bj=tj;bj<n;bj++){
                    sum+=pref2D[bi][bj];
                    if(ti!=0) sum-=pref2D[ti-1][bj];
                    if(tj!=0) sum-=pref2D[bi][tj-1];
                    if(ti!=0 && tj!=0) sum+=pref2D[ti-1][tj-1];
                }
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}