#include<stdio.h>
main()
{
int i,num;
printf("\nenter the number:");
scanf("%d",&num);
for(i=2;i<num;i++)
{
if(num%i==0)
{
break;
}
}
if(i==num)
printf("\n number is prime");
else
printf("\n number is not prime");
}
