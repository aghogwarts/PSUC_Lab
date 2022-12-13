#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum = 0, temp, i = 0, dig, fact;
    printf("\nEnter a positive number:\n>> ");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("\n-- Enter a positive number!!!");
        exit(0);
    }
    temp = num;
    while (temp != 0)
    {
        fact = 1;
        dig = temp % 10;
        for (i = dig; i > 0; i--)
        {
            fact *= i;
        }
        sum += fact;
        temp /= 10;
    }
    if (sum == num)
    {
        printf("\n-- Entered number is a strong number!");
    }
    else
    {
        printf("\n-- Entered number is not a strong number!");
    }
    printf("\n");
    return 0;
}