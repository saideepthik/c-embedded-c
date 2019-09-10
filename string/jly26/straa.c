#include<stdio.h>
#include<stdlib.h>
main()
{
int t[10];
int s[10][10];
int rows,cols,i,j,a,max;
rows=(sizeof(s)/sizeof(s[0]));
cols=(sizeof(s[0])/sizeof(s[0][0]));
srand(getpid());
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
s[i][j]=rand()%100;
}
}
for(i=0;i<rows;i++)
{
printf("\nenter s=%d:",i);
for(j=0;j<cols;j++)
{
printf("%3d",s[i][j]);
}
}
for(i=0;i<rows;i++)
{
for(a=0,j=0;j<cols;j++)
{
a=a+s[i][j];
}
printf("sum of all sub of %d student is:%d\n",i,a);
t[i]=a;
}
for(i=0,max=0;i<rows;i++)
{
if(max<t[i])
max=t[i];
}
printf("max marks scored is:%d\n",max);
}
