#include<stdio.h>
#define f(a,b) a*b
#define g(c,d) c+d
int main(){
    printf("%d",f(4,g(1,3)));
    return 0;
}
