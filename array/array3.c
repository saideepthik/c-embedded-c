#include<stdio.h>
main()
{
char s1[20];
int i;
puts("enter the string:");
gets(s1);
for(i=0;s1[i];i++)
{
if((s1[i]==32)&&(s1[i+1]==32))
{
memmove(s1+i,s1+i+1,strlen((s1+i+1)+1));
i--;
printf("s1=%s\n",s1);
}
}
printf("s1=%s\n",s1);
}

