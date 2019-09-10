#include<stdio.h>
main()
{
FILE *fp;
fp=fopen("data.c","r");
printf("%s\n",fp);
printf("%d\n",fp);
}
