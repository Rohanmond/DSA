#include<bits/stdc++.h>
using namespace std;
void readline(char arr[],int maxLen,char delim='\n'){
    int i=0;
    char ch=cin.get();
    while(ch!=delim){
        arr[i]=ch;
        i++;
        if(i==maxLen-1) break;
        ch=cin.get();
    }
    arr[i]='\0';
    return;
}
int main(){
    // string s;
    // cin>>s;
    // cout<<s; white space terminated
    //"-----------------------------another way to get the input-------------------"
    // char s[100];
    // cin.get(s,100);
    // cout<<s;
    //"------------------using readline--------------------------------"
    char arr[100];
    string s;
    // readline(arr,100,'&');
    //we have already a function
    cin.getline(arr,100,'&');
    cout<<arr<<endl;


    return 0;


    
}