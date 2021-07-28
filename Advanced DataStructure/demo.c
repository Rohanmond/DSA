#include<stdio.h>
int main(int argc,char *argv[]){
    printf("%d\n",argc);
    argc--;
    printf("%d is %s\n",argc,argv[0]);
    return 0;
}