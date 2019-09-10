#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *strreverse(char *);
char *myitoa(int v)
{
int i=0,j,n;
static char ch[10],*ch1;
while(v)
{
n=v%10;
ch[i]=n+48;
i++;
v=v/10;
}
ch[i]='\0';
ch1=strreverse(ch);
return ch1;
}
char *strreverse(char *ch)
{
int i,j,n;
char temp;
n=strlen(ch);
for(i=0,j=n-1;i<j;i++,j--)
{
if((ch[i]>='0')&&(ch[i]<='9'))
{
temp=ch[i];
ch[i]=ch[j];
ch[j]=temp;
}
}
return ch;
}
main()
{
char *ch;
int a,i=0;
printf("enter an integer value:");
scanf("%d",&a);
ch=myitoa(a);
printf("%s\n",ch);
}
