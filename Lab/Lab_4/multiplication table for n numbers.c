#include<stdio.h>
int main (){
  int n,k,i,j;
  printf("Enter n&k for table of 'n' upto k terms: \n");
 printf("n:");
 scanf("%d",&n);
 printf("k:");
 scanf("%d",&k);
 for(i=1;i<=n;i++){
    for(j=1;j<=k;j++)
 {
   printf("%d\t",i*j);
 }
   printf("\n");
 }
}
