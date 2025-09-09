#include<stdio.h>
#include<conio.h>
void main ()
{
int n,i;
float num,a=0,b;
clrscr();
{printf("enter how many numbers");
scanf("%d",&n);
printf("enter the numbers=%d\n",n);
}
for (i=1;i<=n;i++)
{
scanf("%d",&n);
a+=num;
b=a/n;
}
printf("sum=%.2d\n",a);
printf("mean=%.2d\n",b);
getch();
}