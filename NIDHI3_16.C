#include<stdio.h>
int main()
{
int i,n,largest,smallest;
printf("enter 100 numbers");
scanf("%d\n",&n);
largest=smallest=n;
for (i=1;i<=100;i++)
{
scanf("%d",&n);
if (n>largest)
largest=n;
if (n<smallest)
smallest=n;
}
{
printf("largest=%d\n",largest);
printf("smallest=%d\n",smallest);
}
return 0;
}
