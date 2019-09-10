#include<stdio.h>
main()
{
 float s1,s2,s3,s4,t,p;
char c;
printf("enter the marks of all subjects:");
scanf("%f %f %f %f",&s1,s2,s3,s4);
t=s1+s2+s3+s4;
p=t/4;
if(p>=85)
printf("A grade\n");
else if(p>=75)
printf("B grade\n");
else if(p>=65)
printf("C grade\n");
else if(p>=55)
printf("D grade\n");
else
printf("failed");
printf("p is %f\ngrade is %c\n",p,c);
}

