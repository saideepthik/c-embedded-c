#include<stdio.h>
int sum(int v)
{
int s=0;
if(v==0)
return 0;
else
return (v%10)+sum(v/10);
}
main()
{ int n;
printf("enter a digit:");
scanf("%d",&n);
printf("%d",sum(n));
}
