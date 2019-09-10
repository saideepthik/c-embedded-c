#include<stdio.h>
main()
{
char ch;
INPUT: printf("enter an alphabet:");
       //getchar();
       scanf("%c",&ch);
getchar();
if(((ch>='A')&&(ch<='Z'))||((ch>='a')&&(ch<='z')))
{
((ch>='A')&&(ch<='Z'))?(ch+=32):(ch-=32);
printf("ch=%c\n",ch);
}
else
{
printf("invalid input plz give an alphabet\n");
goto INPUT;
}
}
