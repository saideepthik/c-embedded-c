#include<stdio.h>
int main()
{
int data,bit,i,j;
char choice;
printf("\n enter data:");
scanf("%d",&data);
printf("\n enter bit:");
scanf("%d",&bit);
while(1)
{
printf("\n ****menu****\n");
printf("s:set the bit \nc:clear\nm:compliment\nr:reverse\np:print\nq:quit\n make a chioce:");
scanf("%c",&choice);
switch(choice)
{
case 's':data=data|(1<<bit);break;
case 'c':data&=~(1<<bit);break;
case 'm':data^=(1<<bit);break;
case 'r':for(i=31,j=0;i>j;i--,j++)
		  {
		  if(((data>>i)&1)!=((data>>j)&1))
           {
            data^=(1<<i);
            data^=(1<<j);
          }
       }break;
case 'p':printf("data=%d",(data>>i)&1);break;
case 'q':return;

}
}
}

