#include <stdio.h>

int main()
{
    int m, n, i, j, prime;
    printf("Enter m,n to generate prime numbers between them: ");
    scanf("%d,%d", &m, &n);
    i = m;
    while(i <= n)
    {
        prime = 1;
        j = 2;
        while(j < i)
        {
            if(i%j == 0)
            {
                prime = 0;
                break;
            }
            j++;
        }
        if(prime==1)
        {
            printf("%d\t", i);
        }
        i++;
    }
    return 0;
}
