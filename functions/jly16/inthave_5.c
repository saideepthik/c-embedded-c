#include<stdio.h>
int test(int,int);
main()
{
 int v,temp;
temp=8;
for(v=1;v<=1000;v++)
{
if(test(v,temp))
  printf("%d\t",v);
  }
}
int test(int v,int d)
{
while(v)
{
if(v%10==0)
v/=10;
break;
}
if(d==v)
return 1;
else 
return 0;
}
