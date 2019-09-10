#include<stdio.h>
main()
{
  int a=12,b=22;
  int c,d;
   c=a&d;
   printf("and c=%d\n",c);
   c=a|b;
printf("or c=%d\n",c);
   c=a^b;
printf("xor c=%d\n",c);
   c=a<<1;
printf("ls c=%d\n",c);
   c=a>>1;
printf("rs c=%d\n",c);
  c=~a;
printf("compliment c=%d\n",c);
  c=~b;
printf("compliment c=%d\n",c);
}
