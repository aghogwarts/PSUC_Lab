#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, m, n, temp;
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
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                temp = a[i][j];
                a[i][j] = a[i][n - i - 1];
                a[i][n - i - 1] = temp;
            }
        }
    }
    printf("\n\n-- Modified Matrix:\n\n");
    for (i = 0; i < n; i++)
    {
        printf("|");
        for (j = 0; j < n; j++)
        {
            printf(" ");
            printf("%d", a[i][j]);
        }
        printf(" |\n");
    }
    printf("\n");
    return 0;
}