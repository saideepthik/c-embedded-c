#include<stdio.h>
main()
{
int data,bit;
char choice;
printf("enter data");
scanf("%d",&data);
printf("\nenter bit");
scanf("%d",&bit);
while(1)
{
printf("***menu***\n");
printf("s set the bit");
printf("c\n");
printf("r\n");
printf("p\n");
printf("q\n");
printf("enter nyour choice\n");
scanf("%c",&choice);
switch(choice)
{
case 's':
printf("set\n");break;
case 'c':printf("clear\n");break;
case 'r':printf("reverse\n");break;
case 'p':printf("pos\n");break;
case 'r':printf("reverse\n");break;
case default:  ;
}
}
}

