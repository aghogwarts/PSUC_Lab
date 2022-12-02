#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, m, n;
    char a[50][50];
    printf("\nEnter dimensions of the matrix:\n>> ");
    scanf("%d,%d", &m, &n);
    if (m != n)
    {
        printf("\n-- Enter a square matrix\n");
        exit(0);
    }
    printf("\nEnter the elements:\n");
    for (i = 0; i < m; i++)
    {
        printf("\n+ Enter elements of Row %d -\n", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != a[j][i])
            {
                printf("\n-- Entered Matrix is not symmetric\n");
                exit(0);
            }
        }
    }
    printf("\n-- Entered Matrix is symmetric\n");
    return 0;
}