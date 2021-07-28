#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int number;
        cin>>number;
        int a=1,b=1,c=1;
        bool res=false;
        for(int i=2;i*i<=number;i++){
            if(number%i==0){
                number=number/i;
                a=i;
                cout<<i<<endl;
                for(int j=i+1;j*j<=number;j++){
                    if(number%j==0){
                        b=j;
                        number=number/j;
                        if(number!=1 && number!=b) res=true;
                        c=number;
                        break;
                    }
                }
                if(res) break;
            }
        }
        if(res) cout<<"YES"<<endl<<a<<" "<<b<<" "<<c<<endl;
        else cout<<"NO"<<endl;
    }
}