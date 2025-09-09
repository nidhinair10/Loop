#include<stdio.h>
#include<conio.h>
void main ()
{
int n,i,a=0,b=1,c;
clrscr();
printf("enter any number n");
scanf("%d",&n);
if(n>=1)printf("%d",a);
if(n>=2)printf("%d",b);
for (i=3;i<=n;i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
printf("\n");
getch();
}