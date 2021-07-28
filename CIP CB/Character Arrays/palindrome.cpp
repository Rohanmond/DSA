#include<bits/stdc++.h>
using namespace std;
bool palindrome(char arr[]){
    int i=0;
    int j=strlen(arr)-1;
    while(i<j){
        if(arr[i]!=arr[j]) return false;
        i++;
        j--;
    }
    return true;
}
int main(){
    char arr[]="madam";
    char arr2[]="maam";
    char arr3[]="mdam";
    cout<<palindrome(arr)<<endl;
    cout<<palindrome(arr2)<<endl;
    cout<<palindrome(arr3)<<endl;

return 0;
}