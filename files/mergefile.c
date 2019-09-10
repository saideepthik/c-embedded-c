#include<stdio.h>
#include<stdlib.h>
main(int argc,char **argv)
{
FILE *fp1,*fp2;
char buf[80];

//to open files to merge
fp1=fopen(argv[1],"a");
fp2=fopen(argv[2],"r");
//fread(buf,80,1,fp1);
while(fgets(buf,80,fp1))
{
fputs(buf,fp1);
}
while(fgets(buf,80,fp2))
{
fputs(buf,fp1);
}
fcloseall();
printf("data saved in the file named %s\n",argv[1]);
}

