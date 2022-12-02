//* Program to add two array elements and store the corresponding sum elements in another array

#include <stdio.h>

int main()
{
    int a[10], b[10], c[10], n, m, i;
    printf("\nEnter no. of elements in 1st array:\n>> ");
    scanf("%d", &n);
    printf("\nEnter the elements:\n");
    for (i = 0; i < n; i++) // First array reading
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter no. of elements in 2nd array:\n>> ");
    scanf("%d", &m);
    printf("\nEnter the elements:\n");
    for (i = 0; i < m; i++) // Second array reading
    {
        scanf("%d", &b[i]);
    }
    if (m == n)
    { // Addition
        for (i = 0; i < m; i++)
        {
            c[i] = a[i] + b[i];
        }
        printf("\n-- Sum of given array elements:\n>> ");
        for (i = 0; i < n; i++)
        {
            printf("%d\t", c[i]);
        }
    }
    else
    {
        printf("\n-- Cannot add the arrays");
    }
}