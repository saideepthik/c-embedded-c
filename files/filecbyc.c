#include<stdio.h>
main(int argc,char **argv)
{
FILE *s,*t;
char ch;
s=fopen(argv[1],"r");
t=fopen(argv[2],"w");
while((ch=fgetc(s))!=EOF)
{
fputc(ch,t);
}
fclose(s);
fclose(t);
}

