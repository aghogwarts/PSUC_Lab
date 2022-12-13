//* WAP to generate Floyd's Triangle using natural numbers up to a limit N

#include <stdio.h>

int main()
{
    int i, N, num = 1, j;
    printf("\nEnter N to generate Floyd's Triangle upto the limit:\n>> ");
    scanf("%d", &N);
    printf("\n-- Floyd's Triangle:\n\n");
    for (i = 1; i <= N; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%d  ", num);
            num++;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}