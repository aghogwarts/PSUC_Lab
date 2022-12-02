#include <stdio.h>

void IsPalin(char[]);

int main()
{
    char str[50];
    printf("\nEnter a string:\n>> ");
    gets(str);
    IsPalin(str);
    return 0;
}

void IsPalin(char str_check[])
{
    int i, j, n, flag = 1;
    for (i = 0; str_check[i] != '\0'; i++)
        ;
    n = i;
    for (i = 0; i < n / 2; i++)
    {
        if (str_check[i] != str_check[n - i - 1])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        printf("\n-- Entered string is a Palindrome\n");
    else
        printf("\n-- Entered string is not a Palindrome\n");
}