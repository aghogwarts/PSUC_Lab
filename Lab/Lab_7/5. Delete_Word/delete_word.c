#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100], word[100], del[10][30];
    int i = 0, j = 0, k = 0, len1 = 0, len2 = 0;
    printf("\nEnter the string:\n>> ");
    gets(str);
    printf("\nEnter the word to be removed:\n>> ");
    gets(word);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            del[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            del[k][j] = str[i];
            j++;
        }
    }
    del[k][j] = '\0';
    j = 0;
    for (i = 0; i < k + 1; i++)
    {
        if (strcmp(del[i], word) == 0)
        {
            del[i][j] = '\0';
        }
    }
    j = 0;
    printf("\n-- Concatenated string:\n>> ");
    for (i = 0; i < k + 1; i++)
    {
        if (del[i][j] == '\0')
        {
            continue;
        }
        else
        {
            printf("%s ", del[i]);
        }
    }
    printf("\n\n");
    return 0;
}