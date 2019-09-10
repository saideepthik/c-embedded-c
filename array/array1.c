#include<stdio.h>
#include<stdlib.h>
void input(int *);
void print(int *);
void testsc(int *,int *);
void countv(int *);
main()
{
char ch[20];
char m[12]={'a','e','i','o','u','A','E','I','O','U'};
printf("enter chars:");
srand(getpid());
inpu(ch);
print(ch);
countv(ch);
}
void input(int *ch)
{
int i;
for(i=0;i<20;i++)
{
ch[i]=rand()%57+65;
printf("%c\t",ch[i]);
if(ch[i]>=91&&ch[i]<=96)
i--;
}
}
void print(int *ch)
{
int i;
printf("\nyou have suppied:");
for(i=0;i<20;i++)
{
printf("%c\t",ch[i]);
}
}
void countv(int *ch)
{
int i;
for(i=0;i<20;i++)
{
int i;
testsc(ch,m);
}
void testsc(int *ch,int *m)
{
for(j=0;j<10;j++)
{
int i,j,count=0;
if(ch[i]==m[j])
count++;
}
}
printf("\nno. vowels:%d\t",count);
}
