#include<stdio.h>
main()
{
 int v=-35,v1,v2,v3,v4,v5;
v= v>>1;
printf("v=%d\n",v);
v=-15;
v=v>>1;
v1=v>>1;
v2=v1>>1;
v3=v2>>2;
v4=v3>>3;
printf("%d %d %d %d %d\n",v,v1,v2,v3,v4);
}

