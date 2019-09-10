#include"myheader.h"
void save(NODE *p)
{
FILE *fp;
//open the file
fp=fopen("data.c","w");
//write the nodes...
while(p)
{
fprintf(fp,"%s""%d""%s",p->name,p->cont,p->id);
p=p->next;
}
}
