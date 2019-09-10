#include<stdio.h>
int cntdigit(int n)
{
if(n)
return (1+cntdigit(n/10));
else
 return 0;
}
main()
{
int v;
printf("enter an integer:");
scanf("%d",&v);
printf("count is:%d\n",cntdigit(v));
}
