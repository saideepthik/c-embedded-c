#include<stdio.h>
int f2(int a,int b,int c)
{
 printf(" in f2 a=%d,b=%d,c=%d\n",a,b,c);
a=a+b+c; 
return a;
}
main()
{
 int x=100,y=20,a;
 a= f2(x=100,x==y,x=y);
printf("x=%d\ny=%d\n",x,y);
printf("a=%d\n",a);
}
