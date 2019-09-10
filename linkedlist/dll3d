#include"myheader.h"
void deletelnode(NODE *p)
{
NODE *temp=p;
while((temp&&(temp->next)&&(temp->next->next)))
{
temp=temp->next;
}
temp->back->next=temp->next;
temp->next->back=temp->back;
free(temp);
}
