#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<int> v{2,3,5,7,11,13,17,19};
    while(t--){
        long long n;
        long long totalCount=0;
        cin>>n;
        int i=1;
        while(i<(1<<v.size())){
            int temp=i;
            int k=0;
            int prod=1;
            int count=0;
            while(temp){
                if(temp&1){
                    count++;
                    prod*=v[k];
                }
                temp=temp>>1;
                k++; 
            }
            if(count&1){
                totalCount+=(n/prod);
            }else totalCount-=(n/prod);
            i++;
        }
        cout<<totalCount<<endl;
    }
    return 0;
}