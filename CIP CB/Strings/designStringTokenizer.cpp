#include<bits/stdc++.h>
using namespace std;
char* myStTk(char* str,char delim){
    static char* currToken=NULL;
    if(str!=NULL){
        currToken=str;
    }
    if(currToken==NULL){
        return NULL;
    }
    char* output=new char[strlen(currToken)+1];
    int i=0;
    for(;currToken[i]!='\0';i++){
        if(currToken[i]!=delim){
            output[i]=currToken[i];
        }else{
            output[i]='\0';
            currToken=currToken+i+1;
            return output;
        }
    }
    output[i] ='\0';
    currToken=NULL;
    return output;
}
int main(){
    char s[100]="Today is a rainy day";
    char *ptr=myStTk(s,' ');
    cout<<ptr<<endl;
    while(ptr!=NULL){
        ptr=myStTk(NULL,' ');
        cout<<ptr<<endl;
    }
    return 0;
}