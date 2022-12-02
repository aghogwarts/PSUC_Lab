//* Find the average of a 1D Array

#include <stdio.h>

int main()
{
    int arr[50], n; // Declaration of 'arr'
    float sum = 0;
    printf("\nEnter number of elements:\n>> "); // No of elements
    scanf("%d", &n);                            // Reading the limit into n
    printf("\nEnter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Reading n elements
        sum += arr[i];
    }
    printf("\n>> Average of the Array is: %.2f\n", sum / n);
    return 0;
}