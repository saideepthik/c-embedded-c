#include"myheader.h"
void deleteall(NODE **p)
{
NODE *temp;
while((*p))
{
temp=(*p);
(*p)=(*p)->next;
free(temp);
if((*p))
(*p)->back=0;
}
}

