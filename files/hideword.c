#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void str2hide(char *p,int n)
{
int i;
for(i=0;i<n;i++)
{
p[i]='*';
}
}
main(int argc,char **argv)
{
FILE *fp;
char ch,linebuf[100];
fp=fopen(argv[1],"r+");
while(fscanf(fp,"%s",linebuf)!=EOF)
{
if(strcmp(linebuf,argv[2])==0)
{
fseek(fp,-1*strlen(linebuf),1);
str2hide(linebuf,strlen(argv[2]));
 fprintf(fp,"%s",linebuf);
}	
}
fclose(fp);
}
