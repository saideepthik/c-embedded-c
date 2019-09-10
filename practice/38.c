#include<stdio.h>
char *strst(char *str,char *substr)
{
int i,j,cnt=0;
for(i=0;str[i];i++)
{
if(str[i]==substr[0])
{
  for(j=0;substr[j];j++)
   {
  if(str[i+j]== substr[j]);
   }
cnt++;
}
}
printf("no. of occurances:%d\n",cnt);

return substr;
/*int cnt=0;
while(str)
{
 char *b=str;
 char *p=substr;
 while(*str&&*p&&(*str==*p))
 {
 str++;
  p++;
 }
cnt++;
if(!*p)
return b;
str=b+1;
}
printf("all occurances of substring %s : %d\n",substr,cnt-1);
return 0;*/
}
main()
{
 char s1[]="saideepthisaisaideepsaideep";
printf("return string1:%s\n",strst(s1,"deep"));
}
