//* WAP to generate the sine series of a number

#include <stdio.h>
#include <math.h>

int main()
{
    float n, x, numb, PI = 3.141592, term, sum, i;
    printf("\nEnter n and k:\n>> ");
    scanf("%f,%f", &n, &x);
    numb = x;
    x = x * PI;
    term = x;
    sum = x;
    for (i = 1; i <= n; i++)
    {
        term = (((-1) * x * x) / (2 * i * 1));
        sum = term;
    }
    printf("\n-- Library value of sin(%.4f) = %.4f", numb, sin(x));
    printf("\n-- sin(%.4f) = %.4f", numb, sum);
    printf("\n\n");
    return 0;
}
