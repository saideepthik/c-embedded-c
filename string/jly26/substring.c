#include<stdio.h>
#include<string.h>
main()
{
char s1[100],s2[100],*p;
int count=0,i,j;
puts("enter string1:");
gets(s1);
puts(s1);
puts("\nenter strng2:");
gets(s2);
puts(s2);
/*p=s1;
while(p=strstr(p,s2))
{
printf("found at %d\n",p-s1);
count++;
p++;
}
printf("no. occurance:%d\n",count);
p=s1;
while(p=strstr(p,s2))
{
memmove(p,p+strlen(s2),strlen(p+1)+1);
p++;
}
printf("%s",s1);*/
p=s1;
while(p=strstr(p,s2))
{
memset(p,'*',strlen(s2));
p+=strlen(s2);
}
printf("\n%s\n",s1);
}
