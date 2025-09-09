#include <stdio.h>
#include <conio.h>
int main()
{
int i,n;
int a=0,b=0,c=0;
printf("enter 200 numbers");
for ( i=1;i<=200;i++) {
scanf("%d",&n);
if( n>0)
a++;
else if(n<0)
b++;
else
c++;
}
printf("no of positive numbers=%d\n",a);
printf("no of negative numbers=%d\n",b);
printf("no of zeros=%d\n",c);
return 0;
}
