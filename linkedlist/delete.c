#include"myheader.h"
void delete(NODE **p,char *n)
{
NODE *temp,*pre;
temp=(*p);
if((*p)==0)
{
printf("list is empty\n");
return;
}
if(!(strcmp((*p)->name,n)))
{
(*p)=(*p)->next;
free(temp);
return;
}
while(temp&&(strcmp(temp->name,n)))
{

pre=temp;
temp=temp->next;
}
//if(temp==0)
//printf("not found\n");
pre->next=temp->next;
free(temp);

}
