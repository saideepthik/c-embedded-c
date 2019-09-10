//utility function to insert element in the beginning
void insertbeg(HEAD *t,int e)
{
node *p;
p=malloc(sizeof(node));
p->data=e;
p->next=t->start;
t->start=p;
}
