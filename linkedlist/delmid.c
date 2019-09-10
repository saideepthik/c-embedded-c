#include"myheader.h"
void delmid(NODE **p)
{
NODE *temp1,*temp2,*p1;
int cnt;
temp1=(*p);
temp2=(*p)->next;
/*while((*p)->next!=NULL)
{
for(i=0;i<2;i++)
{
temp1=temp1->next->next;
cnt=cnt++;
}
temp2=temp2->next;
p1=p1->next;
if(temp1->next)
free(temp2);
temp2=p1;
}*/
while(temp2)
{
p1=temp1;
temp1=temp1->next;
temp2=temp2->next;
if(temp2)
{
temp2=temp2->next;
}
}
p1->next=temp1->next;
free(temp1);
}
/*for(cnt=1;cur;cur=cur->next,cnt++)
{
p1=p1->next;
if(cnt==1)
pre=cur;
else if((cnt%2)==1)
pre=pre->next;
}
printf("%s %d %s\n",pre->name,pre->cont,pre->id);
p1->next=pre->next;
free(pre);
return (*p);*/
