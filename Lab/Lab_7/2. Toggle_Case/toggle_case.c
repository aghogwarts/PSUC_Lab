#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], temp;
    int i = 0, n;
    printf("Enter a string: ");
    gets(str);
    while(str[i] != '\0')
    {
        i++;
    }
    n = i;
    for(i=0; i<n; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] -32;
        }
        else if (str[i] >= 65 && str[i] <= 90)
        {
            str[i]= str[i] + 32;
        }
    }
    printf("\nThe string in toggle case is:\n-- ");
    puts(str);
    return 0;
}
