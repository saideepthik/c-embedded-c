#include<stdio.h>
#include<string.h>
#include<math.h>
float myatof(char *a)
{
	int v=0,i=0,cnt=0,z;
	float f;
	while(a[i]!='.')
	{
		v=v*10 + a[i]-48;
		i++;
	}

	printf("%d\n",v);
	i++;
	while(a[i]!=NULL)
	{
		cnt++;
		v= v*10 + a[i]-48;
           i++;
	}
	printf("%d\n",v);
//	z=pow(cnt,10);
	f=v/pow(10,cnt);
	return f;
	/*
	   float v=0,cnt=1;
	   int i;
	   for(i=0;a[i];i++)
	   {
	   if(a[i]=='.')
	   break;
	   else
	   v=v*10 + a[i]-48;
	   }
	   if(a[i]=='.')
	   for(i=i+1;a[i];i++)
	   {
	   cnt=cnt*10;
	   v=v*10 + a[i]-48;
	   }
	   return v/cnt;*/
}
main()
{
	char ch[]="123.456";
	float f;
	//printf("enter some ascii value:");
	//scanf("%s",ch);
	f=myatof(ch);
	printf("%f\n",f);
}


