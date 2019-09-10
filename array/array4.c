#include<stdio.h>
main()
{
char s1[50];
int i;
puts("enter the string:");
gets(s1);
for(i=0;s1[i];i++)
{
if(!((s1[i]>='a'&&s1[i]<='z')||(s1[i]>='A'&&s1[i]<='Z')))
{
memmove(s1+i,s1+i+1,strlen((s1+i+1)+1));
i--;
}
}
puts(s1);
}

