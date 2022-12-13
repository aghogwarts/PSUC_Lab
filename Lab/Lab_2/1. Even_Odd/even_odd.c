#include <stdio.h>

int main()
{
    int n;
    printf("\nEnter a number:\n>> ");
    scanf("%d", &n);
    if (n % 2 == 0)
    {
        printf("\n-- Entered number is even\n");
    }
    else
    {
        printf("\n-- Entered number is odd\n");
    }
    return 0;
}
