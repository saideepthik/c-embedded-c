#include<stdio.h>
main()
{
int i,j,n,k;
printf("\n enter the no. of lines:");
scanf("%d",&n);
for(i=-n+1;i<n;i++,printf("\n"))
{
k=i;
if(k<0)
k=-k;
for(j=0;j<n;j++)
{
if(j<k)
printf("  ");
else
printf("*   ");
}
}
}
