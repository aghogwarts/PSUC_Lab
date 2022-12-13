#include <stdio.h>

int main()
{
    int temp, num, r, sum = 0;
    printf("\nEnter number to check if it's an Armstrong:\n>> ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        sum = sum + (r * r * r);
        temp = temp / 10;
    }
    if (num == sum)
    {
        printf("\n-- It is an armstrong");
    }
    else
    {
        printf("\n-- It is not an armstrong");
    }
    printf("\n");
    return 0;
}
