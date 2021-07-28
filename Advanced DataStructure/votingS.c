#include <stdio.h>
int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int main()
{
    int arr[5] = {0}; //key:value(count/freq);
    int n;
    int a = 0, b = 0, c = 0, d = 0;
    scanf("%d", &n);
    while (n--)
    {
        int v;
        printf("Enter vote:\n");
        printf("1=> vote A,2=> vote B,3=>vote C,4=> vote Nota\n");
        scanf("%d", &v);
        arr[v]++;
    }
    int res = -100;
    int k = 0;
    for (int i = 1; i < 5; i++)
    {
        if (res < arr[i])
        {
            res = arr[i];
            k = i;
        }
    }
    if (k == 1)
        printf("A wins\n");
    else if (k == 2)
        printf("B wins\n");
    else if (k == 3)
        printf("C wins\n");
    else if (k == 4)
        printf("D wins\n");

    return 0;
}
