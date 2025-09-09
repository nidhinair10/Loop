#include<stdio.h>
int main()
{
int n,originaln,rem,res=0;
printf("enter any 3-digit number");
scanf("%d",&n);
originaln=n;
while ( n!=0)
{
rem=n%10;
res+=rem*rem*rem;
n/=10;
}
if(res==originaln)
printf("originaln is an armstrong number");
else
printf("originaln is not an armstrong number");
return 0;
}
