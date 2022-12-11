#include <stdio.h>

int main()
{
    int a[] = {1, 2, 9, 8, 6, 3, 5, 7, 8, 9};
    int *p = a + 1;
    int *q = a + 6;
    printf("%d\n", *p + *q);
    printf("%d\n", q - p);
    return 0;
}

//* Guess the output of the following pointer program