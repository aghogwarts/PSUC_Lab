#include <stdio.h>

int main()
{
    int i, n, l=0, s=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            l=a[i+1];
            s=a[i];
        }
        else
        {
            l=a[i];
            s=a[i+1];
        }
    }
    printf("\nLargest number is: %d\n",l);
    printf("Smallest number is: %d\n",s);
    return 0;
}
