#include<stdio.h>
#include<conio.h>
int main ()
{
int n,origi,rev=0,d;
printf("enter any number n");
scanf("%d",&n);
origi=n;
if(n<0){
n=-n;
}
while (n>0)
{
d=n%10;
rev=rev*10+d;
n=n/10;
}
if (origi==rev)
printf("n is a palindrome number");
else
printf("n is not a palindrome number");
 return 0;
 }
