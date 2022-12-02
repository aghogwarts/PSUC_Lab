#include<stdio.h>
int main (){
  int N,i,j,temp=1;
printf("Enter N to print Floyd's triangle:\n");
scanf("%d",& N);
printf("\n");
  for(i=1;i<=N;i++);
{
 for(j=1;j<=i;j++)
{
 printf("%d",temp++);
   }
      printf("\n");
   }

}

