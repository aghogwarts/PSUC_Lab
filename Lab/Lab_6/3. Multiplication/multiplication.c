#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, m, n, p, q, k;
    int A[10][10], B[10][10], C[10][10];
    printf("\nEnter dimension of Matrix A:\n>> ");
    scanf("%d,%d", &m, &n);
    printf("\nEnter dimension of Matrix B:\n>> ");
    scanf("%d,%d", &p, &q);
    if (n != p)
    {
        printf("\n-- Entered Matrices are not multiplicable\n");
        exit(0);
    }
    printf("\n\nEnter elements of Matrix A:\n");
    for (i = 0; i < m; i++)
    {
        printf("\n+ Enter elements of Row %d -\n", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n\nEnter elements of Matrix B:\n");
    for (i = 0; i < p; i++)
    {
        printf("\n+ Enter elements of Row %d -\n", i + 1);
        for (j = 0; j < q; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    printf("\n\n-- The product matrix is:\n\n");
    for (i = 0; i < m; i++)
    {
        printf("|");
        for (j = 0; j < q; j++)
        {
            printf(" ");
            printf("%d", C[i][j]);
        }
        printf(" |\n");
    }
    printf("\n");
    return 0;
}
