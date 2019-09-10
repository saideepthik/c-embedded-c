#include<stdio.h>
typedef struct st
{
// int a:20;
 char b:5;
 //int c:8;
};
main()
{
/*
struct st v;
v.a=7;
v.b=10;
v.c=5;
printf("%d %c %d\n",v.a,v.b,v.c); */
struct st a;
printf("%d\n",sizeof(a));
}
