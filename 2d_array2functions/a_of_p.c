#include<stdio.h>
void printA(int (*p)[4],int r,int c)
{
int i,j;
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%3d",p[i][j]);
}
}
}
void printB(char (*p)[4],int r)
{
int i;
for(i=0;i<r;i++)
{
printf("%s\t",p[i]);
}
}
void printC(char *(*p),int r)
{
int i;
for(i=0;i<r;i++)
{
printf("%s\t",p[i]);
}
}
main()
{
int a[][5]={{1,2,3},{4,5,6},{1,2,3,4}},r,col;
char b[][10]={"iunt","deep","sai","front"};
char *c[]={"num","deep","gang"};
r=sizeof(a)/sizeof(a[0]);
col=sizeof(a[0])/sizeof(a[0][0]);
printA(a,r,col);
printB(b,sizeof(b)/sizeof(b[0]));
printC(c,sizeof(c)/sizeof(*c));
}
