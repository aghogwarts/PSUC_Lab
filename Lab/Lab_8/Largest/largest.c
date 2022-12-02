#include <stdio.h>

int Largest(int[], int);

int main()
{
    int i, arr[50], n, largest;
    printf("\nEnter number of elements:\n>> ");
    scanf("%d", &n);
    printf("\nEnter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    largest = Largest(arr, n);
    printf("\n-- Largest of the entered numbers is: %d\n", largest);
    return 0;
}

int Largest(int num[], int n)
{
    int j, largest = 0;
    for (j = 0; j < n; j++)
    {
        if (num[j] > largest)
        {
            largest = num[j];
        }
    }
    return largest;
}
