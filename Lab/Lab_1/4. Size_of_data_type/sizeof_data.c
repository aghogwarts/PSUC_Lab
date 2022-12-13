//* WAP to display size of data types int,char,float,double,l-int,l-double using sizeof

#include <stdio.h>

int main()
{
    printf("\nSize of Integer: %d", sizeof(int));             // 4
    printf("\nSize of Character: %d", sizeof(char));          // 1
    printf("\nSize of Float: %d", sizeof(float));             // 4
    printf("\nSize of Double: %d", sizeof(double));           // 8
    printf("\nSize of Long-Double: %d", sizeof(long double)); // 16
    printf("\nSize of Long-Integer: %d", sizeof(long int));   // 4
    printf("\n");                                             // Values are in respect to my x64 machine
    return 0;
}