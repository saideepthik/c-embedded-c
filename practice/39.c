#include<stdio.h>
void *mystrcat(char *s1,char *s2)
{
	int i,j;
	for(i=0;s1[i];i++);
	
		for(j=0;s2[j];j++)
		{
			s1[i++]=s2[j];
		}
		s1[i]='\0';
		return s1;
	
}
	main()
	{
		char s1[50],s2[20],*s3;
		printf("enter 1 strings:");

		gets(s1);
printf("string 2\n");
		gets(s2);
		s3=mystrcat(s1,s2);
		printf("\n concatinated string is :%s\n",s3);
	}
