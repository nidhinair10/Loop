#include <stdio.h>
int main ()
{
int n,square,last;
printf("enter a number");
scanf("%d",&n);
square=n*n;
last=square;
while(n>0)
{
last=last%10;
n/=10;
}
if(last==n)
printf(" automorphic number");
else
printf("not an automorphic number");
return 0;
}
