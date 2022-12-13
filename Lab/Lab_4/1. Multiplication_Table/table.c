#include <stdio.h>

int main()
{
    int n, k, i, j;
    printf("\nEnter n,k for multiplying n numbers till k terms:\n>> ");
    scanf("%d,%d", &n, &k);
    printf("\n-- Multiplied result of n numbers each till k terms is:\n\n");
    for (i = 1; i <= n; i++)
    {
        printf("-- ");
        for (j = 1; j <= k; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}