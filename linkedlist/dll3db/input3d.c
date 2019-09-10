#include"myheader.h"
NODE *input(NODE *p)
{
NODE *nu;
//p is the copy of head...
nu=malloc(sizeof(NODE));
puts("\nenter name:");
getchar();
gets(nu->name);
puts("\nenter contact:");
scanf("%d",&nu->cont);
puts("\nenter email_id:");
getchar();
gets(nu->id);
if(p==NULL)
{
//HEAD IF NUL INDICATES THE LIST IS EMPTY..
//HENCE NU NODE WILL BE THE 1ST&LAST NODE AS WELL AS....
nu->next=NULL;
p=nu;
return p;
}
else
{
nu->next=p;
p=nu;
return p;
}
}

