#include"myheader.h"
NODE *syncdb(NODE*head)
{
FILE *fp;
NODE *nu,v,*last;
char argv[12];
printf("enter the file u want to sync\n");
gets(argv);
fp=fopen(argv,"r");
if(fp==0)
return 0;
while((fread(&v,sizeof(NODE)-sizeof(NODE *),1,fp))==1)
//while((fscanf(fp,"%d",&v))==1)
{
nu=calloc(1,sizeof(NODE));
memcpy(nu,&v,sizeof(NODE)-sizeof(NODE *));
if(head==0)
{
head=nu;
last=nu;
}
else
{
last->next=nu;
last=nu;
}
}
fclose(fp);
return head;
}
