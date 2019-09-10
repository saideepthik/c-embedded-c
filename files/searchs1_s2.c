#include<stdio.h>
#include<string.h>
main(int argc,char **argv)
{
FILE *fp;
char word[20],*buf;
fp=fopen(argv[1],"r+");
buf=argv[3];
while((fscanf(fp,"%s",word))==1)
{
if((strcmp(word,argv[2]))==0)
{
strcpy(word+0,buf);
 fseek(fp,(-1*strlen(word)),1);
fputs(word,fp);
}
}
 fputs(word,fp);
fclose(fp);
}

