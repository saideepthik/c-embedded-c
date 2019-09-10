#include<stdio.h>
main()
{
 int a=-5,b=4,c=-7,d;
d=(a<0)&&(b<0)&&(c<0);
printf("%d\n",d);
d=(a<b)&&(b>0)&&(c>0);
printf("%d\n",d);
d=(a<b)&&(b<c);
printf("%d\n",d);
d=(a>b)||(b<0)||(c<0);
printf("%d\n",d);
}
