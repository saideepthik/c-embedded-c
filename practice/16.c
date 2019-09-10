#include<stdio.h>
main()
{
int n,i,j,k,l,x;
printf("\nenter the no. of lines:\n");
scanf("%d",&n);
for(i=1;i<=n;i++,printf("\n"))
{
 x=1;
for(j=0;j<i;j++)
{
printf("%d",x);
x++;
}
for(j=1;j<i;j++)
{
x--;
printf("%d",x);
}
}
}
