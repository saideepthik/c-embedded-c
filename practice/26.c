#include<stdio.h>
main()
{
int v=0,bit;
printf("binary\t decimal\t symbolic \thexadecimal \n");
while((v>=0)&&(v<=127))
{
bit=7;
while(bit>=0)
{
printf("%d",(v>>bit)&1);
bit--;
}
printf("\t%d\t %c\t %x\n",v,v,v);
v++;
}
}
