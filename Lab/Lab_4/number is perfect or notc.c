#include<stdio.h>
int main (){
 int num,i,sum=0;
 printf("Enter number to check:");
 scanf("%d",&num);
 for(i=1;i<=num/2;i++)
 {
     if(num%i==0)
     {
         sum+=i;
     }
 }
  if(sum==num)
  {
      printf("The number is perfect");
  }
  else
  {
      printf("The number is Not perfect");
  }
}
