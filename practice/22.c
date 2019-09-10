#include<stdio.h>
main()
{
int i,j,rem,s=0,p=0;
printf("enter a no.");
scanf("%d",&i);
j=i;
while(i)
{
rem=i%10;
p=rem*rem*rem;
s=s+p;
i=i/10;
printf("%d\n",i);
}
if(s==j)
printf("armstrong no. %d\n",j);
else
printf("not an armstrong no.\n");
}
