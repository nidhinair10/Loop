#include<stdio.h>
#include<conio.h>
int main()
{
int n,d;
{
printf("enter a number");
scanf("%d",&n);
printf("the digits of the number from right to left");
}
while (n>0)
{
d=n%10;
printf("%d\n",d);
n=n/10;
}
return 0;
}
