#include<stdio.h>
main()
{
int n,i,j,c;
printf("\nenter the no. of lines:");
scanf("%d",&n);
for(i=0;i<=n;i++,printf("\n"))
{
c=1;
for(j=0;j<i;j++)
{
printf("%d ",c);
c++;
}
}
}
