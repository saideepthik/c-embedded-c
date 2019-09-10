#include<stdio.h>
#include<stdlib.h>
main(int p,char **argv)
{
FILE *fp;
int *buf=0,i,n;

printf("enter no.of integers required:");
scanf("%d",&n);
buf=calloc(n,sizeof(int));
for(i=0;i<n;i++)
{
printf("enter int(%d left)\n",n-i);
scanf("%d",&buf[i]);
}
printf("you have supplied:\n");
for(i=0;i<n;i++)
{
printf("%d  ",buf[i]);
}

//write the n no. of ints of buf into datafile..
//fp=fopen("data.c","a");
fp=fopen(argv[1],"w+");

for(i=0;i<n;i++)
{
fprintf(fp,"%d  ",buf[i]);
}
fclose(fp);
printf("data saved in the file named in argv[1]");
}

