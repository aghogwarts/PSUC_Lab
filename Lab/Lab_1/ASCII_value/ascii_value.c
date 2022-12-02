//* WAP to print the ASCII value of a character

#include <stdio.h>

int main()
{
    char c;
    printf("Enter a character to find it's ASCII value: ");
    scanf("%c", &c);
    printf("\n-- ASCII value of the character is: %d", c);
    return 0;
}