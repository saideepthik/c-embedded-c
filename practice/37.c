#include<stdio.h>
#include<string.h>
main()
{
char ch[20]; int i;
printf("\n enter the string:");
gets(ch);
for(i=0;i<strlen(ch);i++)
{
 if(ch[i]==' '&&ch[i+1]==' ')
   {
    //while(ch[i]==ch[i+1])
     
      memmove(ch+i,ch+i+1,strlen(ch+i+1));
}
}
puts(ch);
}

