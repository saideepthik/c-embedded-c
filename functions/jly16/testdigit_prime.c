#include<stdio.h>
int testprime(int);
int testdigit(int v,int digit)
{
while(v)
{
if(v%10==digit)
return 1;
v=v/10;
}
return 0;
}
main()
{
int min,max,digit,v;
printf("enter min&max:");
scanf("%d %d",&min,&max);
printf("\nenter digit:");
scanf("%d",&digit);
for(v=min;v<=max;v++)
{
if(testprime(v)&&testdigit(v,digit))
printf("%d\t",v);
}
}
int testprime(int v)
{
int cnt=0,i;
for(i=2;i<=v-1;i++)
{
if(v%i==0)
cnt++;
}
if(cnt==0)
return 1;
else 
return 0;
}

