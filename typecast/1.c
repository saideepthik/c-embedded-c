#include<stdio.h>
main()
{
  int a=9854543,b=-123965432,c=10,d=0;
  printf("%d %d %d %d\n",a,b,c,d);
  b=(long long)a*b/(a=b);
  printf("%d %d %d %d \n",a,b,c,d);
}
