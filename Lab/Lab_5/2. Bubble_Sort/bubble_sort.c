#include <stdio.h>

int main()
{
    int i = 0, j = 0, n, temp = 0;
    char order;
    printf("\nEnter choice: a-for Ascending order, d-for Descending order:\n>> ");
    scanf("%c", &order);
    printf("\nEnter the number of elements in the array:\n>> ");
    scanf("%d", &n);
    int A[n];
    printf("\nEnter array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    switch (order)
    {
    case 'a':
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (A[j] > A[j + 1])
                {
                    temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                }
            }
        }
        printf("\n-- The array in Ascending order is:\n>> ");
        for (i = 0; i < n; i++)
        {
            printf("%d  ", A[i]);
        }
        break;
    case 'd':
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (A[j] < A[j + 1])
                {
                    temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                }
            }
        }
        printf("\n-- The array in Descending order is:\n>> ");
        for (i = 0; i < n; i++)
        {
            printf("%d  ", A[i]);
        }
        break;
    }
    printf("\n\n");
    return 0;
}
