#include<stdio.h>
main()
{
int i,j,n;
printf("\nenter the no.of lines:");
scanf("%d",&n);
for(i=1;i<=n;i++,printf("\n"))
{
for(j=1;j<=n;j++)
{
if(j<=(n-i))
printf(" ");
else 
printf("* ");
}
}
}
