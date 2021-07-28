#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[1000];
    char res[1000];
    int largestLen=0;
    int currLen=0;
    cin.ignore();
    for(int i=0;i<n;i++){
        cin.getline(a,1000);
        currLen=strlen(a);
        if(currLen>largestLen){
            strcpy(res,a);
            largestLen=currLen;
        }
    }
    cout<<"The largest is "<<res<<" and len is "<<largestLen<<endl;
    return 0;
}