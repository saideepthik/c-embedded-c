#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(int argc,char **argv)
{
FILE *fp;
char str[80],ch;
int f;
fp=fopen(argv[1],"r");
while(fgets(str,80,fp)=='\n')
{
	while(f=strstr(str,argv[2]));
	printf("%s",str);

}
fclose(fp);
}
