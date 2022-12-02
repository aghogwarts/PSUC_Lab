#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], str1[200], temp;
    int i = 0, n, m, count = 0;
    printf("Enter a string: ");
    gets(str);
    for(i=0; str[i] != '\0';i++);
    n = i;
    strcpy(str1,str);
    for(i = 0; i<n; i++)
    {
        if(str[i] == str[n-1-i])
        {
            count++;
        }
    }
    if (count == n)
    {
        printf("-- Entered string is a palindrome\n");
    }
    else
    {
        printf("-- Entered string is not a palindrome\n");
    }
    return 0;
}
