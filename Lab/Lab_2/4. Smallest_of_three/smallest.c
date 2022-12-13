#include <stdio.h>

int main()
{
    int a, b, c, smallest;
    printf("\nEnter a,b,c:\n>> ");
    scanf("%d,%d,%d", &a, &b, &c);
    smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    printf("\n-- Of the three: %d is the smallest\n\n", smallest);
    return 0;
}
