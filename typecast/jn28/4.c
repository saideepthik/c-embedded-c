#include<stdio.h>
main()
{
  int a=12,b=22;
  b=1<<10;
printf("%d %d\n",a,b);
  a=b<<10;
printf("%d %d\n",a,b);
  b=a<<10;
printf("%d %d\n",a,b);
   a=b<<1;
printf("%d %d\n",a,b);
   b=a<<1;
printf("%d %d\n",a,b);
   a=b<<1;
printf("%d %d\n",a,b);
}
