#include <stdio.h>

int main()
{
    int temp, num, r, sum=0;
    printf("Enter number to check if it's an Armstrong: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        sum = sum + (r*r*r);
        temp = temp / 10;
    }
    if (num == sum)
    {
        printf("It is an armstrong");
    }
    else
    {
        printf("It is not an armstrong");
    }
    return 0;
}
