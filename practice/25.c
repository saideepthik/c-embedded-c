#include<stdio.h>
main()
{
int i,j,n,k,p;
printf("enter the no.\n");
scanf("%d",&n);
for(i=-n;i<=n;i++,printf("\n"))
{
k=i;
if(k<0)
k=-k;
for(j=-n;j<=n;j++)
{
p=j;
if(p<0)
p=-p;
if(k<=p)
printf("* ");
else
printf("  ");
}
}
}

