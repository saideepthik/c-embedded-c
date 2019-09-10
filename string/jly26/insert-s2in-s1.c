#include<stdio.h>
#include<string.h>
main()
{
char s1[100],s2[30],temp[40];
int p;
puts("enter strigs:");
gets(s1);
gets(s2);
puts("\nenter pos:");
scanf("%d",&p);
strcpy(temp,s1+p);
strcpy(s1+p,s2);
strcat(s1,temp);
printf("s1=%s,s2=%s\n",s1,s2);
}
