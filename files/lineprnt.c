#include<stdio.h>
main(int argc,char ** argv)
{
FILE *fp;
int n=1,a;
char ch;
fp=fopen(argv[1],"r");
a=atoi(argv[2]);
do{
if(a==n)
{
while(((ch=(fgetc(fp)))!=EOF)&&(ch!=10))
{
printf("%c",ch);
}
break;
}
ch=fgetc(fp);
if(ch=='\n')
n++;
}while(ch!=EOF);
fclose(fp);
}
