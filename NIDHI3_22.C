#include<stdio.h>
#include<conio.h>
int main ()
{
int n,digits=0;
printf("enter any number n");
scanf("%d",&n);
if (n==0)
{
digits=1;
}
else {
if(n<0){
n=-n;
}
while (n>0)
{
n=n/10;
digits++;
}
printf("no of digits in the number=%d\n",digits);
}
return 0;
}
