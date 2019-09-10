#include<stdio.h>
main()
{
int rem,n,m,r=0,n1;
printf("enter no.");
scanf("%d",&n);
n1=n;
while(n!=0)
{
rem=n%10;
r=r*10 + rem;
n=n/10;
}
if(n1==r)
printf("it is palindrome no.\n");
else
printf("it is not a palindrome no.\n");
}

