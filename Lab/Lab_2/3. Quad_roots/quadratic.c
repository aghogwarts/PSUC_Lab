#include <stdio.h>
#include <math.h>

int main()
{
    int check;
    float a, b, c, r1, r2, re, im, D;
    printf("\nEnter the coefficients a,b,c:\n>> ");
    scanf("%f,%f,%f", &a, &b, &c);
    D = b * b - 4 * a * c;
    if (D == 0)
    {
        check = 1;
    }
    else if (D > 0)
    {
        check = 2;
    }
    else
    {
        check = 3;
    }
    switch (check)
    {
    case 1:
        printf("\n> Real and equal roots:");
        re = -b / (2 * a);
        printf("\n-- Roots are %f\n", re);
        break;
    case 2:
        printf("\n> Real and distinct roots:");
        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);
        printf("\n-- Roots are %f and %f\n", r1, r2);
        break;
    case 3:
        printf("\n> Imaginary roots:");
        re = -b / (2 * a);
        im = pow(fabs(D), 0.5) / (2 * a);
        printf("\n-- Roots are %f + i%f\n", re, im);
    }
    return 0;
}
