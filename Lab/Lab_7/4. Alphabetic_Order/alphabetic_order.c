#include <stdio.h>
#include <string.h>

int main()
{
    char str[30][30], temp[30];
    int n,i,j;
    printf("Enter the number of names: ");
    scanf("%d", &n);
    printf("Enter the names: \n");
    fflush(stdin);
    for (i = 0; i < n; i++)
    {
        gets(str[i]);
    }
    for (i = 0; i<n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp, str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);

            }
        }
    }
    printf("\n-- The sorted names in Alphabetic order are: \n");
    for (i = 0; i < n; i++)
    {
        puts(str[i]);

    }

}
