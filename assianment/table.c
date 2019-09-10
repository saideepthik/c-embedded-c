#include<stdio.h>
main()
{
int min,max,i,j;
printf("enter the min ,max values:");
scanf("%d %d",&min,&max);
for(i=min;i<=max;i++,printf("\n"))
{
for(j=1;j<=10;j++)
printf("%d\t",i*j);
}
}

