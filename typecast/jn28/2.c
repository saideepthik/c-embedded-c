#include<stdio.h>
main()
{
  int a=10,b=0,c=5;
  int d;
  d=(a=b)&&(b=c)&&(c=a);
 printf("%d %d %d %d\n",a,b,c,d);
  d=(a=b)||(b=c)||(c=a);
 printf("%d %d %d %d\n",a,b,c,d);
   d=(a=b)||(b=c)||(c=a);
printf("%d %d %d %d\n",a,b,c,d);
  d=(b=c)||(c=a)&&(c=a);
printf("%d %d %d  %d\n",a,b,c,d);
} 
