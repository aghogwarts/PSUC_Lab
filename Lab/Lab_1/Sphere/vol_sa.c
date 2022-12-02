//* WAP to input radius and find the the volume and surface area of the sphere

#include <stdio.h>
#include <math.h>

int main()
{
    float r, vol, sa;
    printf("Enter radius of sphere to perform calculations: ");
    scanf("%f", &r);
    vol = (float)4 / 3 * 3.14 * pow(r, 3);
    sa = 4 * 3.14 * pow(r, 2);
    printf("\n-- Volume of Sphere: %.2f", vol);
    printf("\n-- Surface Area of Sphere: %.2f", sa);
    return 0;
}