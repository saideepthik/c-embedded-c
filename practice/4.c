#include<stdio.h>
main()
{
int num,i,fact;
printf("\n enter a number:");
scanf("%d",&num);
fact=num;
for(i=1;i<num;i++)
{
fact=fact*i;
}
printf("\n the factorial of %dis %d\n",num,fact);
}
