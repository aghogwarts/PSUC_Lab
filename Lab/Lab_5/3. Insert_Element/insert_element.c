#include<stdio.h>

int main()
{
    int i, n, pos, ele, a[50];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the values:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element to be added and its position: ");
    scanf("%d,%d",&ele,&pos);
    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=ele;
    n++;
    printf("New Array with %d inserted at position %d:\n",ele,pos);
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
