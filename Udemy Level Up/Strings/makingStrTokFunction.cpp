#include<bits/stdc++.h>
using namespace std;
char* myStringTokenizer(char *arr,char delim){
    static char* input=NULL;
    if(arr!=NULL){
        input=arr;
    }
    //base case
    if(input==NULL) return NULL;
    int i=0;
    char *output=new char[strlen(input)+1];
    for(;input[i]!='\0';i++){
        if(input[i]==delim){
            output[i]='\0';
            input=input+i+1;
            return output;
        }
        output[i]=input[i];
    }
    output[i]='\0';
    input=NULL;
    return output;
}
int main(){
    char arr[1000];
    cin.getline(arr,1000);
    char *ptr=myStringTokenizer(arr,' ');
    while(ptr!=NULL){
        cout<<ptr<<endl;
        ptr=myStringTokenizer(NULL,' ');
    }
    return 0;
}