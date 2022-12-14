/*
    WAP to:
    1. Accept dimensions of a matrix of order MxM and display the matrix.
    2. Create a function Boundary() to find the sum of the boundary elements of a matrix and return it.
    3. Find all the elements of the matrix that are perfect numbers and replace them with the sum found out
       using Boundary()

    Note- perfect numbers are numbers where the sum of every divisor of the number except the number
          = the number itself

    You can implement the boundary sum algorithm in many different ways but this is the one I found the easiest
*/

#include <stdio.h>

int Boundary(int a[50][50], int size)
{
    int i, j, sum;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == 0 || i == size - 1) // create a check here so that all elements of the top and botton rows are added
            {
                sum += a[i][j];
            }
            else // check for all the elements in the remaining rows in between
            {
                if (j == 0 || j == size - 1) // sub check to only get the first and last element of the remaining rows in between
                {
                    sum += a[i][j];
                }
            }
        }
    }
    return sum;
}

int main()
{
    int i, j, bound_sum, x, p_sum, M, matrix[50][50];
    printf("\nEnter dimension M of Matrix of order MxM:\n>> ");
    scanf("%d", &M);
    printf("\nEnter elements of the Matrix:");
    for (i = 0; i < M; i++)
    {
        printf("\n> Enter elements of Row %d:\n", i + 1);
        for (j = 0; j < M; j++)
        {
            scanf("%d", &matrix[i][j]); // Get matrix elements
        }
    }
    printf("\n-- Given Matrix is:\n");
    for (i = 0; i < M; i++)
    {
        printf("\n|\t");
        for (j = 0; j < M; j++)
        {
            printf("%d\t", matrix[i][j]); // Display the matrix in a nice format
        }
        printf("|");
    }
    bound_sum = Boundary(matrix, M); // Get and display the boundary sum
    printf("\n\n-- Sum of the boundary elements of the Matrix is:\n>> %d\n", bound_sum);
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < M; j++)
        {
            p_sum = 0;                         // Check for perfect number and initialise the sum to 0
            for (x = 1; x < matrix[i][j]; x++) // Check for all the numbers that are divisors of that element
            {
                if (matrix[i][j] % x == 0) // If they are divisors add them to the sum
                {
                    p_sum += x;
                }
            }
            if (p_sum == matrix[i][j]) // If sum of divisors = number itself
            {
                matrix[i][j] = bound_sum; // Replace with the Boundary sum from line 63
            }
        }
    }
    printf("\n-- Modified Matrix:\n");
    for (i = 0; i < M; i++) // Display the modified matrix
    {
        printf("\n|\t");
        for (j = 0; j < M; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("|");
    }
    printf("\n\n");
    return 0;
}