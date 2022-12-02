#include <stdio.h>

int main()
{
    int a[10], n, i, max;
    int *p;
    printf("\nEnter the size of array:\n>> ");
    scanf("%d", &n);
    printf("\nEnter %d elements in the array:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nElements in the array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    p = &a[0];
    max = a[0];
    for (i = 0; i < n; i++)
    {
        if (max <= *p)
            max = *p;
        p++;
    }
    printf("\n\n-- Maximum element in the array is: %d\n", max);
    return 0;
}