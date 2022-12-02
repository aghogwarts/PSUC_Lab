//* How to read & display the values of an array and store it

#include <stdio.h>

int main()
{
    int arr[50], n;                           // Declaration of 'arr'
    printf("Enter number of elements:\n>> "); // No of elements
    scanf("%d", &n);                          // Reading the limit into n
    printf("\nEnter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Reading n elements
    }
    printf("\n-- Elements of the array are:\n>> ");
    for (int j = 0; j < n; j++) // Displaying n elements
    {
        printf("%d\t", arr[j]);
    }
    printf("\n");
    return 0;
}