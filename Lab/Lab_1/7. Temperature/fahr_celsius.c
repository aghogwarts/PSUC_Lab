//* Convert given temperature in fahrenheit to celsius

#include <stdio.h>

int main()
{
    float F, C;
    printf("\nEnter Temperature in Fahrenheit:\n>> ");
    scanf("%f", &F);
    C = ((float)5 / 9) * (F - 32);
    printf("\n-- Temp in Celsius: %.2f", C);
    printf("\n");
    return 0;
}