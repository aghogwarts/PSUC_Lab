#include <stdio.h>
#include <math.h>

int main()
{
    int i, n, num, dig, product, square;
    float root;
    printf("Enter n to take numbers: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        product = 1;
        printf("\nEnter number %d: ", i);
        scanf("%d", &num);
        printf("... Running a check on the even digits of the number\n");
        while (num != 0)
        {
            dig = num % 10;
            if (dig % 2 == 0)
            {
                product *= dig;
            }
            num /= 10;
        }
        if (product >= 0 && product <= 10)
        {
            square = pow(product, 2);
            printf("-- Square of the product of the digits is: %d\n", square);
        }
        else if (product >= 11 && product <= 100)
        {
            root = sqrt(product);
            printf("-- Square root of the product of the digits is: %f\n", root);
        }
        else
        {
            printf("-- Product is: %d\n", product);
        }
    }
    printf("\n");
    return 0;
}