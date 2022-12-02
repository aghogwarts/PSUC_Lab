//* WAP to display size of data types int,char,float,double,l-int,l-double using sizeof

#include <stdio.h>

int main()
{
    printf("\nSize of Integer: %d", sizeof(int));
    printf("\nSize of Character: %d", sizeof(char));
    printf("\nSize of Float: %d", sizeof(float));
    printf("\nSize of Double: %d", sizeof(double));
    printf("\nSize of Long-Double: %d", sizeof(long double));
    printf("\nSize of Long-Integer: %d", sizeof(long int));
    return 0;
}