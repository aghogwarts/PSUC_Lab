//* WAP to find the sum,diff,prod,quo of 2 numbers

#include <stdio.h>

int main()
{
    int a, b, sum, diff, prod, quot;
    printf("\nEnter 2 numbers to perform some basic operations on:\n>> ");
    scanf("%d,%d", &a, &b);
    sum = a + b;
    diff = a - b;
    prod = a * b;
    quot = a / b;
    printf("\nSum: %d", sum);
    printf("\nDifference: %d", diff);
    printf("\nProduct: %d", prod);
    printf("\nQuotient: %d", quot);
    printf("\n");
    return 0;
}