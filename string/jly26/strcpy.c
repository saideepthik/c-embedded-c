#include<stdio.h>
#include<string.h>
main()
{
char s1[100],s2[30],s3[40],s4[30];
puts("enter strigs:");
gets(s1);
gets(s2);
gets(s3);
strcpy(s4,s1);
strcpy(s4+strlen(s4),s2);
strcpy(s4+strlen(s4),s3);
printf("s4=%s\n",s4);
}
