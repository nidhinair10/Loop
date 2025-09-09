#include <stdio.h>
#include<conio.h>
int main ()
{
int i,boys=0,girls=0;
char gender;
for (i=1;i<=50;i++)
{
printf("enter gender of student (B/G)");
scanf("%c",&gender);
if (gender=='B')
boys++;
else if (gender=='G')
girls++;
}
{
printf( "No of boys=%d\n",boys);
printf("no of girls=%d\n",girls);
}
return 0;
}
