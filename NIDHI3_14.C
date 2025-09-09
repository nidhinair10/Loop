#include<stdio.h>
#include<conio.h>
void main ()
{
int n[10],i,a=0;
double b;
clrscr();
{
printf("enter any 10 numbers n");
}
for (i=1;i<=10;i++)
{
scanf("%d",&n[i]);
a+=n[i];
b=(double)a/10;
}
printf("sum=%.2d\n",a);
printf("mean=%.2d\n",b);
getch();
}
