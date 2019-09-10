#include<stdio.h>
#include<string.h>
int cnt=0;
const int max=10;
char s[10][3][20];
void input(void)
{
if(cnt==max)
{
puts("memory full\n");
return;
}
puts("\nenter name:");
getchar();
gets(s[cnt][0]);
puts("\nenter contact:");

gets(s[cnt][1]);
puts("\nenter email_id:");

gets(s[cnt][2]);
cnt++;
return;
}
void print(void)
{
int i,j;
printf("\n*****************\n");
for(i=0;i<cnt;i++)
{
for(j=0;j<cnt;j++)
printf("%s\n",s[i][j]);
}
return;
}
void delete(char (*p)[2][20])
{
int i;
scanf("%d",&i);
memmove(p[i],p[i]+strlen(p[i]),strlen(p[i])+1);
cnt--;
return;
}
void find(char (*p)[2][20])
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
main()
{
char choice;
int n1,n2;
n1=(sizeof(s)/sizeof(s[0]));
n2=(sizeof(s[0])/sizeof(s[0][0]));
while(1)
{
printf("i\tp\td\tf\tq\n");
printf("enter ur choice:");
scanf("%c",&choice);
switch(choice)
{
case 'i':input();break;
case 'p':print();break;
case 'd':delete(s);
	   break;
case 'f':find(s);break;
case 'q':printf("quit");return;
}
}
}
