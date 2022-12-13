#include <stdio.h>

int main()
{
    int i, n, l = 0, s;
    printf("\nEnter number of elements:\n>> ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter the values:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    s = a[0];
    for (i = 0; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            if (a[i + 1] > l)
            {
                l = a[i + 1];
            }
            if (a[i] < s)
            {
                s = a[i];
            }
        }
        else
        {
            if (a[i] > l)
            {
                l = a[i];
            }
            if (a[i + 1] < s)
            {
                s = a[i + 1];
            }
        }
    }
    printf("\n-- Largest number is: %d", l);
    printf("\n-- Smallest number is: %d", s);
    printf("\n\n");
    return 0;
}
