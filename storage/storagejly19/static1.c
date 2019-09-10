#include<stdio.h>
void f()
{
int v;
scanf("%d",&v);
switch(v)
{
static int s=23;
case 1:printf("%d\n",s);s=100;v=s;break;
case 2:printf("%d\n",s);s=200;v=s;break;
}
printf("v=%d\n",v);
}
main()
{
f();
}
