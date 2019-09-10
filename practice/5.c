#include<stdio.h>
main()
{
int val,fib=1,x=0,y=1,z=1,i;
printf("\nenter the highest values to print the fibonnacci series:");
scanf("%d",&val);
for(i=0;i<val;i++)
{
printf("%d\t",y);
fib=x+y;
x=y;
y=fib;
}
}
