#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, j, m, n, norm, trace = 0, sum = 0;
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
        trace += a[i][i];
        for (j = 0; j < n; j++)
        {
            sum = sum + a[i][j] * a[i][j];
        }
    }
    norm = sqrt(sum);
    printf("\n-- Trace of the matrix is: %d\n", trace);
    printf("-- Norm of the matrix is: %d\n", norm);
    return 0;
}
