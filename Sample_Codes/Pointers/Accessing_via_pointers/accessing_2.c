//* WAP to understand how to access a variable and change it's value via pointers using the Dereferance operator

#include <stdio.h>

int main()
{
    int var_1, var_2;
    int *ptr;
    ptr = &var_1; // Storing the address of var_1
    *ptr = 42;    // Value at address of var_1 = 42
    var_2 = *ptr; // Giving value to var_2 same as var_1 = var_2
    printf("\n%d\n", var_2);
    return 0;
}