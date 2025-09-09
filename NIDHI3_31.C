#include <stdio.h>
int main ()
{
int i,j,isprime;
long sum=0;
for (i=2;i<=500;i++){
{
isprime=1;
for(j=2;j<1;j++)
if(i%j==0)
{
isprime=0;
break;
}
}
if(isprime)
{
sum+=i;
}
}
printf("summation of prime numbers between 1 and 500");
return 0;
}
