#include <stdio.h>

int main()
{
    int n, rev, num, rd;
    printf("\nEnter a number:\n>> ");
    scanf("%d", &n);
    rev = 0;
    num = n;
    while (n != 0)
    {
        rd = n % 10;
        rev = rev * 10 + rd;
        n = n / 10;
    }
    if (rev == num)
    {
        printf("\n-- The entered number is a palindrome");
    }
    else
    {
        printf("\n-- The entered number is not a palindrome");
    }
    printf("\n");
    return 0;
}
