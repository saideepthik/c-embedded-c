#include<stdio.h>
main()
{
 int y;
printf("enter the year:");
scanf("%d",&y);
if(y%4==0&&y%100!=0||y%400==0)
printf("leap year\n");
else
printf("not a leap year\n");
}

