#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void str2upper(char *p,int n)
{
int i;
for(i=0;i<n;i++)
{
if((p[i]>='a')&&(p[i]<='z'))
p[i]-=32;
}
}
main(int argc,char **argv)
{
FILE *fp;
char ch,linebuf[100],*found;
int flag=0;
fp=fopen(argv[1],"r+");
while(fgets(linebuf,100,fp))
{
flag=0;
found=linebuf;
while(found=strstr(found,argv[2]))
{
flag=1;
str2upper(found,strlen(argv[2]));
found+=strlen(argv[2]);
if(flag)
{
 fseek(fp,-1*strlen(linebuf),1);
 fputs(linebuf,fp);
}
}
}
fclose(fp);
}
