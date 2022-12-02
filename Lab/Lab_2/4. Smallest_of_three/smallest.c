#include <stdio.h>

int main()
{
    int a,b,c,smallest;
    printf("Enter a,b,c : ");
    scanf("%d,%d,%d",&a,&b,&c);
    smallest = ( a < b ) ? (( a < c ) ? a : c) : (( b < c ) ? b : c);
    printf("Of the three : %d is the smallest",smallest);
    return 0;
}
