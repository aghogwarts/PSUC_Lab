#include <stdio.h>

int main()
{
    int n, i, prime=1, prime_num=0, comp_num=0;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        i = 2;
        prime = 1;
        if(n==-1)
        {
            break;
        }
        if(n==1)
        {
            prime=3;
        }
        while(i<(n/2))
        {
            if(n%i==0)
            {
                prime=0;
                break;
            }
            i++;
        }
        if(prime==1)
        {
            prime_num++;
        }
        else if(prime==0)
        {
            comp_num++;
        }
    }
    while(n != -1);
    printf("No of prime numbers is: %d\n", prime_num);
    printf("No of composite numbers is: %d\n", comp_num);
    return 0;
}
