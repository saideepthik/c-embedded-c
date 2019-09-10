#include"myheader.h"
void deleteall(NODE **p)
{
NODE *temp;
while((*p)->next!=0)
{
temp=(*p);
(*p)=(*p)->next;
free(temp);
}
temp=(*p);
free(temp);
(*p)=NULL;
}

