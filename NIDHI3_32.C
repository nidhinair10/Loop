#include <stdio.h>
int main()
{
int i,j,totalprimes=0,isprime;
for (i=2;i<=500;i++){
isprime=1;
for (j=2;j<i;j++){
if(i%j==0 )
{
isprime=0;
break;
}
}
if (isprime){
totalprimes++;
}
}
printf("total prime numbers between 1 and 500=%d\n",totalprimes);
return 0;
}
