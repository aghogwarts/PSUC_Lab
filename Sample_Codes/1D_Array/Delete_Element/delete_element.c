//* WAP to delete an element from an array

#include <stdio.h>

int main()
{
    int i, n, pos;
    int a[50];
    printf("\nEnter no of elements:\n>> ");
    scanf("%d", &n);
    printf("\nEnter numbers in the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the position at which the element to be deleted:\n>> ");
    scanf("%d", &pos);
    for (i = pos - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1]; // shift the elements to left
    }
    n = n - 1; // decrement the count of no of elements
    printf("\n-- The array after deleting the element at %dth position is:\n>> ", pos);
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}