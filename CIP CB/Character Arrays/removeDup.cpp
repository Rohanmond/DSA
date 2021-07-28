#include<bits/stdc++.h>
using namespace std;
void rD(char arr[]){
    int i=0;
    int j=1;
    int n=strlen(arr);
    if(n<=1) return;
    while(arr[j]!='\0'){
        if(arr[i]==arr[j]) {
            j++;
            // cout<<j<<" "<<i<<endl;
            // cout<<"matching"<<arr[i]<<" : "<<arr[j]<<endl;
            continue;
        }

        i++;

        arr[i]=arr[j];
            // cout<<" n matching"<<arr[i]<<" : "<<arr[j]<<endl;

        j++;
    }
    arr[i+1]='\0';
}
int main(){
    char arr[]="ccoooding";
    rD(arr);
    cout<<arr<<endl;
    return 0;
}