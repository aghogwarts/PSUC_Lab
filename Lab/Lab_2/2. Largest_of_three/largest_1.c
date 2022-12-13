#include <stdio.h>

int main()
{
    int a, b, c;
    printf("\nEnter a,b,c:\n>> ");
    scanf("%d,%d,%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("\n-- Of the numbers: %d is the largest\n", a);
        }
        else
        {
            printf("\n-- Of the numbers: %d is the largest\n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("\n-- Of the numbers: %d is the largest\n", b);
        }
        else
        {
            printf("\n-- Of the numbers: %d is the largest\n", c);
        }
    }
    printf("\n");
    return 0;
}
