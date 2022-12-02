#include <stdio.h>

int main()
{
    struct student fs[3] =
        {
            {1,"manish",45,47,49},
            {2,"ankur",43,44,45},
            {3,"swati",46,42,43}
        };
    struct student temp;
    int i, n=3, total[3]={0}, avg[3]={0},tot=0;
    for(i=0; i< n; i++)
    {
        total[i]=fs[i].marks.sub1+fs[i].marks.sub2+ fs[i].marks.sub3;
        avg[i] = total[i]/3;
    }
    printf("Total & Average of each student.\n");
    for(i=0;i<n;i++)
    {
        printf("\nTotal of %s = %d & avg = %d", fs[i].name, total[i], avg[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(avg[i] > avg[j])
            {
                temp=fs[i];
                fs[i]=fs[j];
                fs[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("\n%s\n",fs[i].name);
    }
    return 0;
}
