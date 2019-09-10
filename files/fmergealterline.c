#include<stdio.h>
main(int argc,char **argv)
{
FILE *f1,*f2,*f3;
char buf[80],ch,ch1;
f1=fopen(argv[1],"r");
f2=fopen(argv[2],"r");
f3=fopen(argv[3],"w");
while((ch=fgetc(f1))!=EOF&&(ch1=fgetc(f2))!=EOF)
{
if(ch!='\0')
{
ungetc(ch,f1);
fgets(buf,80,f1);
fputs(buf,f3);
}
if(ch1!='\0')
{
ungetc(ch1,f2);
fgets(buf,80,f2);
fputs(buf,f3);
}
}
fcloseall();
puts("files merged with alternate lines ");
}

