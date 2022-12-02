//* WAP to insert an element in a sorted array

#include <stdio.h>

int main()
{
    int i, n, pos = 0, ele;
    int a[50];
    printf("\nEnter no of elements:\n>> ");
    scanf("%d", &n);
    printf("\nEnter numbers in the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nEnter the element to be inserted:\n>> ");
    scanf("%d", &ele);
    for (i = 0; i < n; i++) // finding position
    {
        if (ele < a[i])
            break;
    }
    pos = i + 1;               // position of insertion
    for (i = n; i >= pos; i--) // shift the elements to right
    {
        a[i] = a[i - 1];
    }
    a[pos - 1] = ele; // ele is inserted at the specified pos.
    n = n + 1;        // increment the count of no of elements
    printf("\n-- The array after inserting the element is:\n>> ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}