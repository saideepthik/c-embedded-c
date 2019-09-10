#include<stdio.h>
main()
{
int i,n,t;
printf("enter no. of lines you want:");
scanf("%d",&n);
for(i=0,t=0;i<=n*4;i++,t++)
{
if(t!=4)
printf("%d",i%10);
else
{
printf("\n%d",i%10);
t=0;
}
}
}
