#include<stdio.h>
main()
{
int n,q,r,rev=0;
printf("enter a no. to reverse\n");
scanf("%d",&n);
while(n)
{
rev*=10;
rev+=n%10;
n=n/10;
}
printf("reversed no. is %d\n",rev);
}
