#include<stdio.h>
#include<string.h>
int cnt=0;
const int max=10;
void input(char (*p)[20])
{
if(cnt==max)
{
printf("memory full\n");
return;
}
printf("enter name\n");
getchar();
gets(p[cnt]);
cnt++;
return;
}
void print(char (*p)[20])
{
int i;
printf("\n*****************\n");
for(i=0;i<cnt;i++)
printf("%s\n",p[i]);
}
void delete(char (*p)[20])
{
int i;
char name[20];
puts(" ");
getchar();
gets(name);
for(i=0;i<cnt;i++)
{
if(strstr(p[i],name))
break;
if(i==cnt)
printf(" ");
else
memmove(p+i,p+i+1,(cnt-i-1)*20);
}
return;
}
void find(char (*p)[20])
{
char a[20];
int c=0,i;
printf("enter name to search\n");
getchar();
gets(a);
for(i=0;i<cnt;i++)
{
if(strstr(p[i],a))
{
printf("found at [%d]location %s\n",i,p[i]);
c++;
}
}
if(c==0)
printf("not found");

}
main()
{
char s[10][20],choice;
int r,c;
r=(sizeof(s)/sizeof(s[0]));
c=(sizeof(s[0])/sizeof(s[0][0]));
while(1)
{
printf("i\tp\td\tf\tq\n");
printf("enter ur choice:");
scanf("%c",&choice);
switch(choice)
{
case 'i':input(s);break;
case 'p':print(s);break;
case 'd':delete(s);break;
case 'f':find(s);break;
case 'q':printf("quit");return;
}
}
}
