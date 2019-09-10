#include<stdio.h>
main()
{
int v;
scanf("%d",&v);
switch(v)
{
static int s=23;
case 1:printf("%d\n",s=18);s=100;v=s;break;
case 2:printf("%d\n",s=10);s=200;v=s;break;
}
printf("v=%d\n",v);
}
