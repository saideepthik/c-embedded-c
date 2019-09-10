#include<stdio.h>
main()
{
 int n,p;
printf("enter the n and p:");
scanf("%d %d",&n,&p);
n=n|(1<<p);
printf("%d\n",n);
}

