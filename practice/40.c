#include<stdio.h>
#include<string.h>
main()
{
int i,cnt=0;
char str1[100],str2[100],temp[100],*ptr;
puts("\n enter string1:");
gets(str1);
puts("\n enter string2 to be searched:");
gets(str2);
strcpy(temp,str1);
for(i=0;i<strlen(temp);i++)
{
 ptr=strstr(temp,str2);
 cnt++;
printf("\n%d\n",cnt);
memmove(temp,ptr+strlen(str2),strlen(ptr+strlen(str2)+1));
}
printf("\n%d\n",cnt);
}

