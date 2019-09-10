#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int myatoi(char *str)
{
int v=0,i;
for(i=0;str[i];i++)
{
//if((str[i]>='0')&&(str[i]<='9'))
v=v*10 + str[i]-48;
}
return v;
}
main()
{
char ch[10];
int i,*p;
printf("enter the string");
gets(ch);
i=myatoi(ch);
printf("%d",i);
}
