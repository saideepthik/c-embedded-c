#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*void str2hide(char *p,int n)
{
int i;
for(i=0;i<n;i++)
{
p[i]='*';
}
}*/
main(int argc,char **argv)
{
FILE *fp;
char ch,linebuf[100];
int flag=0,c=42,cnt=0;
fp=fopen(argv[1],"r+");
while(fscanf(fp,"%s",linebuf)==1)
{
if(strcmp(linebuf,argv[2])==0)
//str2hide(linebuf,strlen(argv[2]));
memset(linebuf,'*',strlen(argv[2]));
cnt++;
fseek(fp,-1*strlen(linebuf),1);
 fprintf(fp,"%s",linebuf);
}
printf("count of %s is %d",argv[2],cnt);
fclose(fp);
}
