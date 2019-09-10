#include<stdio.h>
#include<string.h>
main()
{
char a[20]="saideepthisai",b[10]="giri";
int pos,r1,r2;
printf("enter the position:");
scanf("%d",&pos);
memmove(a+pos+strlen(b),a+pos,strlen(a+pos)+1);
strncpy(a+pos,b,strlen(b));
printf("\na=%s\n",a);
printf("enter range of the char:");
scanf("%d %d",&r1,&r2);
memmove(a+r1,a+r2+1,strlen(a+r2+1)+1);
printf("\na=%s and b=%s\n",a,b);
}

