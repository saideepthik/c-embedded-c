#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(int argc,char **argv)
{
FILE *fp;
char *found=0,*buf=0,*s1=0,*s2=0,word[20];
int l1=0,l2=0,size=0,cnt=0;
s1=argv[2];
fp=fopen(argv[1],"r");
s2=argv[3];
l1=strlen(s1);
l2=strlen(s2);
if(argc<4)
printf("insufficient arguments at ./a.out\n");
fseek(fp,0,2);
size=ftell(fp);
rewind(fp);
buf=calloc(1,size+1);
fread(buf,size+1,1,fp);
printf("%s",buf);
found=buf;
while(found=strstr(found,s1))
{
cnt++;
found++;
}
if(l2>l1)
{
size=size+(cnt*(l2-l1));
buf=realloc(buf,size+2);
}
found=buf;
buf=s2;
fp=fopen(argv[1],"r+");
while((fscanf(fp,"%s",word))==1)
{
if(strcmp(word,s1)==0)
while((found=strstr(found,s1)))
{
strcpy(word+0,buf);
fseek(fp,-1*strlen(word),1);
fputs(word,fp);
}
}
//fputs(word,fp);
/*while(found=strstr(found,s1))
{
memmove(found+l2,found+l1,strlen(found+l1)+1);
memmove(found,s2,strlen(s2));
}
fputs(buf,fp);*/
fclose(fp);
printf("%s\n",buf);
}
