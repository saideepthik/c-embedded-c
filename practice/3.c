#include<stdio.h>
main()
{
 int a,b,i,pow;
 printf("\n enter the values of a&b resp.");
scanf("%d %d",&a,&b);
pow=a;
for(i=1;i<b;i++)
{
pow*=a;
}
printf("\n%d^ %d is %d",a,b,pow);
}

