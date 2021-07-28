#include<bits/stdc++.h>
using namespace std;
void changeChar(char arr[]){
    int length=strlen(arr);
    int countSpaces=0;
    for(int i=0;i<length;i++){
        if(arr[i]==' ') countSpaces++;
    }
    countSpaces*=2;
    for(int i=length-1;i>=0;i--){
        if(arr[i]==' '){
            arr[i+countSpaces]='0';
            countSpaces--;
            arr[i+countSpaces]='2';
            countSpaces--;
            arr[i+countSpaces]='%';
            continue;
        }
        arr[i+countSpaces]=arr[i];
    }
}
int main(){
    char arr[100]="hello world how are you?";
    changeChar(arr);
    cout<<arr<<endl;
    return 0;
}