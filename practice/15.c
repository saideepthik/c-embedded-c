#include<stdio.h>
main()
{
int n,i,j,k;
printf("\nenter no. of lines:");
scanf("%d",&n);
for(i=1;i<=n;i++,printf("\n"))
{
for(j=-n;j<=n;j++)
{
k=j;
if(k<0)
k=-k;
if(k<i)
{
printf("*");
}
else
printf(" ");
}
}
}
