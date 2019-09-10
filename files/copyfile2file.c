#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
FILE *fp;
int size;
char *buf;
fp=fopen(argv[1],"r");
fseek(fp,0,2);
size=ftell(fp);
fseek(fp,0,0);
//rewind(fp);


buf=calloc(1,size+1);
fread(buf,size,1,fp);
fclose(fp);
fp=fopen(argv[2],"w");
fputs(buf,fp);
//fwrite(buf,size,1,fp);

fclose(fp);
}







