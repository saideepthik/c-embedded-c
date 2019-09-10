#include<stdio.h>
main()
{
int n,m,s=0,r;
printf("enter no.");
scanf("%d",&n);
m=n;
while(n)
{
r=n%10;
s=s*10+r;
n=n/10;
}
if(s==m)
printf("palindrome\ni");
else
printf("not palindrome\n");
}
