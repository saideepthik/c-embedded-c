#include<stdio.h>
main()
{
char ch;
int b,i;
b=sizeof(int);
printf("\nenter a valid character:\t");
scanf("%c",&ch);
i=ch;
if(i>0&&i<=127)
{
printf("\nthe decimal equivalent of %c is %d\n",ch,ch);
printf("\nthe binary equivalent of %c is :",ch);
while(b>=0)
{
printf("%d",(ch>>b)&1);
b--;
}
return ch;
}
else 
printf("\nerror");
}
