#include<stdio.h>
#include<string.h>
main()
{
char buff[100];
int s=0,i;
printf("enter some msg \n");
read(0,&buff,100);
printf("you have entered :%s\n",buff);
for(i=0;i<=strlen(buff);i++)
{
if(buff[i]!='\n')
s+=buff[i];
}
printf("%d",s);
}
