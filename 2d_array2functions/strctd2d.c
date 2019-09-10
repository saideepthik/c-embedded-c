#include<stdio.h>
#include<string.h>
struct student
{
struct name
{
char name[10];
}n;
struct contact
{
int c[15];
}con;
struct id
{
char i[15];
}
}
int cnt=0;
void *input(char (*p)[10])
{
p=realloc(p,(cnt+1)*20);
puts("enter name\n");
getchar();
gets(p[cnt]);
cnt++;
printf(" %s",p[cnt]);
return p;
}
void print(char (*p)[10])
{
int i;
printf("\n*****************\n");
for(i=0;i<cnt;i++)
printf("p[%d]= %s\n",i,p[i]);
}
void *delete(char (*p)[20])
{
int i;
scanf("%d",&i);
if((i<0)||(i>=cnt))
memmove(p+i,p+i+1,(cnt-1-i)*20);
cnt--;
p=realloc(p,(cnt+1)*20);
return p;
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
if(strcmp(p[i],a)==0)
{
printf("found at [%d]location %s\n",i,p[i]);
c++;
}
}
if(c==0)
printf("not found");
}
void sort(char (*p)[20],int r,int c)
{
char temp[20];
int i,j;
puts("before sort:\n");
for(i=0;i<r;i++)
{
printf("%s\n",p[i]);
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(strcmp(p[j],p[i])>0)
{
strcpy(temp,p[j]);
strcpy(p[j],p[i]);
strcpy(p[i],temp);
}
}
}
puts("after sort:\n");
for(i=0;i<r;i++)
{
printf("%s\n",p[i]);
}
}
main()
{
char (*s)[10]=0;
char choice;
int r,c;
r=sizeof(s)/sizeof(s[0]);
c=sizeof(s[0])/sizeof(s[0][0]);
while(1)
{
printf("i\tp\td\tf\tq\ts\n");
printf("enter ur choice:");
scanf(" %c",&choice);
switch(choice)
{
case 'i':s=input(s);break;
case 'p':print(s);break;
case 'd':s=delete(s);break;
case 'f':find(s);break;
case 's':sort(s,r,c);break;
case 'q':printf("quit");return;
}
}
}
