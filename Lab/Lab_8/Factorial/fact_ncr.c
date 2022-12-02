#include <stdio.h>

int Fact(int);

int main()
{
    int n, r, ncr, n_fact;
    printf("\nEnter the Values for N and R:\n>> ");
    scanf("%d,%d", &n, &r);
    n_fact = Fact(n);
    ncr = Fact(n) / (Fact(r) * Fact(n - r));
    printf("\n-- Factorial of %d is: %d", n, n_fact);
    printf("\n-- NCR Factorial of %d and %d is: %d\n", n, r, ncr);
    return 0;
}

int Fact(int Number)
{
    int i;
    int Factorial = 1;
    for (i = 1; i <= Number; i++)
    {
        Factorial = Factorial * i;
    }
    return Factorial;
}