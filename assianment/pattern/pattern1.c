#include<stdio.h>
main()
{
int i,j,h;
printf("enter for no. of lines:");
scanf("%d",&h);
  for(i=1;i<=h;i++,printf("\n"))
{   
for(j=1;j<=h-i;j++) 
printf(" ");
for(j=1;j<=i;j++)
printf("*");
}
}
