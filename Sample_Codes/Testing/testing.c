//* Write a code to remove duplicates from a 1D Array

#include <stdio.h>

int main()
{
    int arr[50], n, i, j, ele, pos;             // Declaration of 'arr'
    printf("\nEnter number of elements:\n>> "); // No of elements
    scanf("%d", &n);                            // Reading the limit into n
    printf("\nEnter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Reading n elements
    }
    for (i = 0; i < n; i++)
    {
        ele = arr[i];
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] == ele)
            {
                for (pos = j; pos < n - 1; pos++)
                {
                    arr[pos] = arr[pos + 1];
                }
                n--;
            }
        }
    }
    printf("\n-- Elements of the array after removing duplicates are:\n>> ");
    for (int j = 0; j < n; j++) // Displaying n elements
    {
        printf("%d\t", arr[j]);
    }
    printf("\n\n");
    return 0;
}