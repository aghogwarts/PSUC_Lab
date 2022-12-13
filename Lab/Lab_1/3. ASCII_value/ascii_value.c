//* WAP to print the ASCII value of a character

#include <stdio.h>

int main()
{
    char c;
    printf("\nEnter a character to find it's ASCII value:\n>> ");
    scanf("%c", &c);
    printf("\n-- ASCII value of the character is: %d\n", c);
    return 0;
}