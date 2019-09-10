#include<stdio.h>
main()
{
int i,j,n,k;
printf("\nenter the no. of lines:");
scanf("%d",&n);
for(i=-n+1;i<n;i++,printf("\n"))
{
k=i;
if(k<0)
k=-k;
for(j=n;j>=0;j--)
if(j<=k)
printf("* ");
else
printf(" ");
}
}

