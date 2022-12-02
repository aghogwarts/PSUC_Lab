#include<stdio.h>
#include<math.h>
int main (){
    float n,x,numb,PI=3.141592,term,sum,i;
    printf("Enter n and k:\n");
    scanf("%f %f",&n,& x);
    numb=x;
    x=x*PI;
    term=x;
    sum=x;
    for(i=1;i<=n;i++)
    {
        term=(((-1)*x*x)/(2*i*1));
        sum=term;
    }
     printf("Library value of sin(%f)=%f",numb,sin(x));
     printf("\n sin(%f)=%f",numb,sum);

}
