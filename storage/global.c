#include<stdio.h>
extern int g=10;
void f(int g)
{
g+=18;
printf("%d=g\n",g);
}
main()
{
printf("g=%d\n",g);
f(g++);
printf("g=%d\n",g);
} 
