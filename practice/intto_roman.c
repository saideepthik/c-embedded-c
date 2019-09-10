#include<stdio.h>
void predigit(char num1,char num2);
void postdigit(char c,int n);
char romanval[1000];
int i=0;
int main()
{
int j;
long num;
printf("enter the  number:");
scanf("%d",&num);
if(num<=0)
{
puts("invalid number");return 0;
}
while(num!=0)
{
if(num>=1000)
{
postdigit('M',num/1000);
num=num-(num/1000) * 1000;
}
else if(num>=500)
{
  if(num<(500+4 * 100))
  {
    postdigit('D',num/500);
    num =num-(num/500)*500;
  }
  else
  {
   predigit('C','M');
   num=num - (1000-100);
  }
}
else if(num>=100)
{
  if(num<(100+3*100))
  {
   postdigit('C',num/100);
   mum=num-(num/100)*100;
  }
 else
  {
  predigit('L','D');
  mum=num-(500-100);
  }
}
else if(num>=50)
{
 if(num<(50+4*10))
  {
   postdigit('L',num/50);
   num=num-(num/50)*50;
  }
 else
  {
  predigit('X','C');
  num=num-(100-10);
  }
}
else if(num>=10)
{ 
 if(num<(10+3*10))
  {
   postdigit('X',num/10);
   num=num-(num/10)*10;
  }
 else
  {
  predigit('X','L');
  num=num-(50-10);
  }
}
else if(num>=5)
{
 if(num<(5+3))
 {
 postdigit('V',num);
 num=num-(num/5*5);
 }
 else
 {
 predigit('V','I');
 num=num-(10-5);
 }
}




