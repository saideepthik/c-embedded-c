#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
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
char ch,linebuf[100],*found;
int i;
fp=fopen(argv[1],"r+");
while(fscanf(fp,"%s",linebuf)==1)
{
if(strcmp(linebuf,argv[2])==0)
{
//str2hide(linebuf,strlen(argv[2]));
for(i=0;linebuf[i];i++)
{
printf("%c\t",linebuf[i]);
linebuf[i]=toupper(linebuf[i]);
}
printf("\n");
fseek(fp,-1*strlen(linebuf),1);
 fprintf(fp,"%s",linebuf);
}
}
fclose(fp);
}
