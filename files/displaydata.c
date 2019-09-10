#include<stdio.h>
main()
{
FILE *fp;
char v;
fp=fopen("data.c","r");
while(fread(&v,sizeof(char),1,fp)==1)
{
printf("%c",v);
}
fclose(fp);
}
