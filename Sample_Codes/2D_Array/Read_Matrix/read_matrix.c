//* Read a matrix and display it

#include <stdio.h>

int main()
{
    int i, j, m, n, a[50][50];
    printf("\nEnter dimensions of the Matrix:\n>> ");
    scanf("%d,%d", &m, &n);
    printf("\nEnter the elements:\n");
    for (i = 0; i < m; i++)
    {
        printf("\n-- Enter elements of Row %d:\n", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n>> The entered Matrix is:\n\n");
    for (i = 0; i < m; i++)
    {
        printf("|  ");
        for (j = 0; j < n; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("|\n");
    }
    printf("\n");
    return 0;
}