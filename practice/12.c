#include<stdio.h>
main()
{
 int x,y;
 printf("\nenter a number:");
 scanf("%d",&x);
y=(x<0)?-x:x;
printf("absolute value of %d is %d\n",x,y);
}
