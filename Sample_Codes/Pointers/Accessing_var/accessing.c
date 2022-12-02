//* WAP to access the value of variables using pointers

#include <stdio.h>

int main()
{
    int var_1 = 11, var_2 = 22;
    int *ptr;
    ptr = &var_1;
    printf("\n%d", *ptr);
    ptr = &var_2;
    printf("\n%d\n", *ptr);
    return 0;
}