#include"myheader.h"
void print(NODE *p)
{
NODE *temp;
if(p)
temp=p->next;
int i=1;
while(p)
{
printf("student[%d]\n",i);
printf("%s\t%d \t%s\n",p->name,p->cont,p->id);
p=p->next;
if(temp->next)
temp=temp->next;
i++;
}
}

