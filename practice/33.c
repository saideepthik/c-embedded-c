#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{
char str[10];
int i=0,cnt=0;
printf("enter the string:");
scanf("%s",str);
for(i=0;str[i];i++)
{
cnt++;
}
printf("%d\n",cnt);
}

