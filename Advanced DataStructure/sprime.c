#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;
    int arr[1000];
    int currSize = 0;
    for (int i = 1; i <= n; i++) //o(n)- t.c  o(1)-s.c
    {

        if (n % i == 0)
        {
            count++;
            arr[currSize] = i;
            currSize++;
        }
    }
    if (count == 2)
        printf("prime\n");
    else
    {
        printf("Not prime\n");
        printf("The factors are:");
        for (int i = 0; i < currSize; i++)
        {
            printf("%d,", arr[i]);
            // printf(",");
        }
        printf("\n");
    }
    return 0;
}