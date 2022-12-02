#include <stdio.h>
#include <string.h>

int main()
{
    int count, i = 0;
    char str[100];
    count = 1;
    printf("Enter a sentence: ");
    gets(str);
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            count++;
        }
        i++;
    }
    printf("\n-- The number of words in the sentence is: %d\n", count);
    return 0;
}
