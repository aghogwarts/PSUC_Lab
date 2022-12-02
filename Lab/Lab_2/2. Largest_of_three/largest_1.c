#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a,b,c : ");
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("Of the numbers : %d is the largest",a);
        }
        else
        {
            printf("Of the numbers : %d is the largest",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("Of the numbers : %d is the largest",b);
        }
        else
        {
            printf("Of the numbers : %d is the largest",c);
        }
    }
    return 0;
}
