#include<stdio.h>
void f1(void)
{
   printf("in f1\n");
}
void f2(int,int);
main()
{
 f1();
 f2(100,200);
}
void f2(int a,int b)
{
 printf("a=%d and b=%d\n",a,b);
}
