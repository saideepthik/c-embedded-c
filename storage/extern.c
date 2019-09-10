#include<stdio.h>
void f1(void);
void f2(void);
void f3(void); 
void f4(void);
 int g;
main()
{
int g=10;
printf("main g=%d\n",g);
f1();
f2();
f3();
f4();
printf("after fun g=%d\n",g);
}
void f1(void)
{
g++;
printf("f1 g=%d\n",g);
}
void f2(void)
{
g++;
printf("f2 g=%d\n",g);
}
void f3(void)
{
g++;
printf("f3 g=%d\n",g);
}
void f4(void)
{
g++;
printf("f4 g=%d\n",g);
}
int g=20;
