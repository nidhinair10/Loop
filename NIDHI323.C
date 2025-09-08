#include<stdio.h>
#include<conio.h>
int main ()
{
int n,d,s=0;
printf("enter any number n");
scanf("%d",&n);
if(n<0){
n=-n;
}
while (n>0)
{
d=n%10;
s+=d;
n=n/10;
}
printf("sum of digits=%d\n",s);
return 0;
}
