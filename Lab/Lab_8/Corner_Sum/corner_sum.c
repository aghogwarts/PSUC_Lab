#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int CornerSum(char[][50], int, int);

int main()
{
    int i, j, m, n;
    char a[50][50];
    printf("\nEnter dimensions of the matrix:\n>> ");
    scanf("%d,%d", &m, &n);
    printf("\nEnter the elements:\n");
    for (i = 0; i < m; i++)
    {
        printf("\n+ Enter elements of Row %d -\n", i + 1);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    CornerSum(a, m, n);
    return 0;
}

int CornerSum(char matrix[][50], int rows, int columns)
{
    int i, j, sum = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            if ((i == 0 || i == rows - 1) && (j == 0 || j == columns - 1))
            {
                sum += matrix[i][j];
            }
        }
    }
    printf("\n-- Sum of the corner elements of the matrix is: %d\n", sum);
    return 0;
}