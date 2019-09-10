#include<stdio.h>
main(int argc,char **argv)
{
FILE *s,*t;
char ch,str[20];
s=fopen(argv[1],"r");
t=fopen(argv[2],"w");
while((ch=fgets(str,100,s)))
{
fputs(str,t);
}
fclose(s);
fclose(t);
}

