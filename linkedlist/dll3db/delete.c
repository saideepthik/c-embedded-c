#include"myheader.h"
void delete(NODE **p,char *n)
{
NODE *temp;
temp=(*p);
if((*p)==0)
{
printf("list is empty\n");
return;
}
if(!(strcmp((*p)->name,n)))
{
temp=(*p)->next;
memmove(temp->name,(*p)->next->name,strlen(temp->name));
(*p)->next=temp->next;
free(temp);
}
while(temp&&(strcmp(temp->name,n)))
{
temp=(*p)->next;
memmove(temp->name,(*p)->next->name,strlen(temp->name));
//p->next=temp->next;
//free(temp);
}
//if(temp==0)
//printf("not found\n");
(*p)->next=temp->next;
free(temp);
return;
}
