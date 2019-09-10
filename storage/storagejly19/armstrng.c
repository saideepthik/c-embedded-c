#include<stdio.h>
main()
{
int i,j,rem=0,sum=0,p=0;
printf("enter no.:");
scanf("%d",&i);
j=i;
while(i)
{
rem=i%10;
p=rem*rem*rem;
sum=sum+p;
i=i/10;
printf("%d\t",i);
}
if(sum==j)
printf("armstrong no.:\n");
else
printf("not armstrong no.\n");
return 0;
}
