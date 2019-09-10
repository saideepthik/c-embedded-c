#include<stdio.h>
main()
{
int i,j,n,k;
printf("enter valve\n:");
scanf("%d",&n);
for(i=-n;i<=n;i++,printf("\n"))
{
k=i;
if(k<0)
k=-k;
for(j=0;j<n;j++)
{
if(j<k)
printf(" ");
else
printf(" *");
}
}
}
