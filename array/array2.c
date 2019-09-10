#include<stdio.h>
main()
{
char s1[20];
int r1,r2;
puts("enter the string:");
gets(s1);
printf("\nenter range of char to remove:");
scanf("%d %d",&r1,&r2);
memmove(s1+r1,s1+r2+1,strlen((s1+r2+1)+1));
printf("s1=%s\n",s1);
}

