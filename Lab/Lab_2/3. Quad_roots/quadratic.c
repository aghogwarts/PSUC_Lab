#include<stdio.h>
#include<math.h>

int main()
{
    int check;
    float a,b,c,r1,r2,re,im,D;
    printf("Enter the coefficients a,b,c : ");
    scanf("%f,%f,%f",&a,&b,&c);
    D = b*b-4*a*c;
    if(D == 0)
    {
        check = 1;
    }
    else if(D > 0)
    {
        check = 2;
    }
    else
    {
        check = 3;
    }
    switch(check)
    {
        case 1:
            printf("Real and equal roots : ");
            re = -b/(2*a);
            printf("Roots are %f",re);
            break;
        case 2:
            printf("Real and distinct roots : ");
            r1 = (-b + sqrt(D))/(2*a);
            r2 = (-b - sqrt(D))/(2*a);
            printf("Roots are %f and %f",r1,r2);
            break;
        case 3:
            printf("Imaginary roots : ");
            re = -b/(2*a);
            im = pow(fabs(D),0.5)/(2*a);
            printf("Roots are %f + i%f",re,im);
    }
    return 0;
}
