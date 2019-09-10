#include<stdio.h>
main()
{
int i,j;
for(i=1;i<=4;i++)
{
	for(j=1;j<=i;j++)
	{
	if(i%(j+1)==0&&i>j)
		printf("0");
	else
		printf("1");
	}
	printf("\n");
}
return 0;
}
