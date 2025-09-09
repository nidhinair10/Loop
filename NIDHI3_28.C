#include<stdio.h>
int main ()
{
int n,i,s;
printf("enter any number n");
scanf("%d",&n);
printf("Factors of n are:");
for (i=1;i<n;i++){
if (n%i==0)
{
s+=i;
}
}
if (s==n)
printf(" n is a perfect number");
else
printf("n is not a perfect number");
return 0;
}
