#include <stdio.h>
#include<conio.h>
void main ()
{
int i,j,k,choice;
clrscr;
printf("choose option 1=A,2=B,3=C,4=D");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\noption A:\n");
for(i=1;i<=2;i++)
{
for (j=1;j<=3;j++)
{
printf("%d%d\n",i,j);
}
}
break;
case 2:
printf("\noption B:\n");
for(i=1;i<=3;i++)
{
for (j=i;j<=3;j++)
{
printf("%d%d\n",i,j);
}
}
break;
case 3:
printf("\noption C:\n");
for(i=1;i<=2;i++)
{
for (j=1;j<=2;j++)
{
for(k=1;k<=2;k++)
{
printf("%d%d%d\n",i,j,k);
}
}
}
break;
case 4:
printf("\noption D:\n");
for(i=5;i>=3;i--)
{
for (j=1;j<=2;j++)
{
printf("%d%d\n",i,j);
}
}
break;
default:
printf("invalid choice!");
}
getch();
}
