#include<stdio.h>
int f1(int n);
main()
{
int n;
printf("enter a no.:",n);
scanf("%d",&n);
printf("sum of digits of%d is %d\n",n,sum(n));
}
int sum(int n)
{
static int s=0;
if(n>0)
{
s=s+(n%10);
sum(n/10);
return s;
}
}
