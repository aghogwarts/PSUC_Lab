//* WAP to check if the given number is perfect or not (sum of +ve divisors of a number except the number is equal to the number itself)

#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("\nEnter a number to check if it is a perfect number:\n>> ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        printf("\n-- Entered number is a perfect number!");
    }
    else
    {
        printf("\n-- Entered number is not a perfect number!");
    }
    printf("\n\n");
    return 0;
}