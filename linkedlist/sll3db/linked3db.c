
#include"myheader.h"
NODE *input(NODE *);
void print(NODE *);
void delete(NODE **,char *);
void save(NODE *);
void deleteall(NODE **);
main()
{
char choice,n[20];
NODE *head=0;
head=syncdb(head);
while(1)
{
printf("**********menu********\n");
printf("i\tp\td\ts\ta\tq\n");
printf("enter ur choice:");
scanf("%c",&choice);
switch(choice)
{
case 'i':printf("----input----");
          head=input(head);break;
case 'p':printf("------print--------\n");
         print(head);break;
case 'd':printf("enter the contact which u want to delete\n");
         scanf("%s",n);
         delete(&head,n);break;
case 's':save(head);break;
case 'a':deleteall(&head);break;
case 'q':return;
}
}
}
