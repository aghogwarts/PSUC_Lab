#include <stdio.h>

int main()
{
    int n, rev, num, rd;
    printf("Enter a number : ");
    scanf("%d",&n);
    rev = 0;
    num = n;
    while(n != 0)
    {
        rd = n % 10;
        rev = rev * 10 + rd;
        n = n / 10;
    }
    if (rev == num)
    {
        printf("The entered number is a palindrome");

    }
    else
    {
        printf("The entered number is not a palindrome");
    }
    return 0;
}
