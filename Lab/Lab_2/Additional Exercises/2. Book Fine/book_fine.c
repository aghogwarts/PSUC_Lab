#include <stdio.h>

int main()
{
    int days;
    printf("\nEnter the number of days you are late to return the book:\n>> ");
    scanf("%d", &days);
    if (days <= 5)
    {
        printf("\n-- Your fine is Rs. 0.50");
    }
    else if (days <= 10)
    {
        printf("\n-- Your fine is Rs. 1.00");
    }
    else if (days <= 30)
    {
        printf("\n-- Your fine is Rs. 5.00");
    }
    else
    {
        printf("\n-- Your fine is Rs. 10.00");
    }
    printf("\n");
    return 0;
}