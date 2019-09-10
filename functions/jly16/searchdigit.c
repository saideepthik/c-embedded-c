#include<stdio.h>
int f(int v,int d)
{ 
int total;
while(v)
{
total=v%10;
v=v/10;
}
if(total==d)
return 1;
else 
return 0;
}
main()
{
int d,v;
printf("enter the digit to search:");
scanf("%d",&d);
for(v=1;v<=9999;v++)
{
if(f(v,d))
printf("%d\t",v);
}
}
