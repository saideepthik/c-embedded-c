#include<stdio.h>
main()
{
int n,i,j,x=0,k,l;
printf("\nenter no. of lines:");
scanf("%d",&n);
for(i=1;i<=n;i++,printf("\n"))
{
for(j=-n;j<=n;j++)
{
k=j;l=j;
if(k<0)
k=-k;
if(k<i)
{
if(l<=0)
x++;
else 
x--;
printf("%d ",x);
}
else
printf("  ");
}
}
}
