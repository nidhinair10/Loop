#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,n;
clrscr();
{
printf("enter any number n");
scanf("%d",&n);
printf("%d\n",n);
}
for(i=1;i<=n;i+=2)
{
printf("%d\n",i);
}
getch();
}