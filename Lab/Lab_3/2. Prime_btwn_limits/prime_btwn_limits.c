#include <stdio.h>

int main()
{
    int m, n, i, j, prime;
    printf("\nEnter m,n to generate prime numbers between them:\n>> ");
    scanf("%d,%d", &m, &n);
    i = m;
    printf("\n> Prime numbers between %d and %d are:\n-- ", m, n);
    while (i <= n)
    {
        prime = 1;
        j = 2;
        while (j < i)
        {
            if (i % j == 0)
            {
                prime = 0;
                break;
            }
            j++;
        }
        if (prime == 1)
        {
            printf("%d\t", i);
        }
        i++;
    }
    printf("\n\n");
    return 0;
}
