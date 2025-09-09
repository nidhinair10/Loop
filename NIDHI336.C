#include<stdio.h>
#include<conio.h>
void main ()
{
int i,j,choice;
clrscr();
printf("choose option 1=A,2=B");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("\noption A:\n");
i=1;
j=5;
while(i<=5 && j>=1)
{
printf("%d%d\n",i,j);
i++;
j--;
}
break;
case 2:
printf("\noption B:\n");
for(i=1,j=5;i<=3;i++,j--)
{
printf("%d%d\n",i,j);
printf("%d%d\n",i,j);
}
break;
default:
printf("invalid choice!");
}
getch();
}