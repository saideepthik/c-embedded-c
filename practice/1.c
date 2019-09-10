#include<stdio.h>
main()
{
int min,max,i,j,temp,n=0;
printf("enter min and max value:\n");
scanf("%d %d",&min,&max);
//printf("\nenter space width:");
//scanf("%d",&n);
//temp=max;
/*while(temp)
{
n++;
temp/=10;
}
n+=2;*/
for(i=min;i<=max;i++,printf("\n"))
{
for(j=1;j<=10;j++)
printf("%d\t",i*j);
}
}
