//* Finding the row sum of a matrix

#include <stdio.h>

int main()
{
    int i, j, m, n, a[50][50];
    printf("\nEnter dimensions of the Matrix:\n>> ");
    scanf("%d,%d", &m, &n);
    int row_sum[m];
    printf("\nEnter the elements:");
    for (i = 0; i < m; i++)
    {
        row_sum[i] = 0;
        printf("\n-- Enter elements of Row %d:\n", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            row_sum[i] += a[i][j];
        }
    }
    printf("\n\n>> The Calculated Matrix is:\n\n");
    for (i = 0; i < m; i++)
    {
        printf("\n|\t");
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("|\t=\t%d", row_sum[i]);
    }
    printf("\n\n");
    return 0;
}