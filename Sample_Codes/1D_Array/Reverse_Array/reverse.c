//* Write a program to reverse an array using only one array

#include <stdio.h>

int main()
{
    int a[20], i, j, n, temp;
    printf("\nEnter number of elements:\n>> ");
    scanf("%d", &n);
    printf("\nEnter values of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    printf("\n-- Reversed Array:\n>> ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}