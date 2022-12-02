#include <stdio.h>

int FIB(int n)
{
    if (n <= 1)
        return n;
    return FIB(n - 1) + FIB(n - 2);
}

int main()
{
    int i, n;
    printf("\nEnter n to find the fibonacci series uptill that number:\n>> ");
    scanf("%d", &n);
    printf("\n-- The Fibonacci series up to the %dth term is:\n", n);
    for (i = 0; i < n; i++)
    {
        printf("%d\t", FIB(i));
    }
    printf("\n");
    return 0;
}
