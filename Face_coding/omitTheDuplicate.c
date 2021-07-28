#include<stdio.h>
int main(){
    int maxS=(int) 1e6+1;
    int arr[maxS];
    for(int i=0;i<maxS;i++){
        arr[i]=0;
    }
    int n;
    scanf("%d",&n);
    while(n--){
        int item;
        scanf("%d",&item);
        if(arr[item]==0) printf("%d ",item);
        arr[item]++;
    }
    printf("\n");
    return 0;
}